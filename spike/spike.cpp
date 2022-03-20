#include <Aks3l/Args.hpp>

using namespace Aks3l;

int main(int argc, char** argv)
{
  Args::BoolFlag printElfHeader   {"header", "h", "prints the elf header"};

  Args::BoolFlag printSecHeaders  {"sec-headers", "sh", "prints section headers"};
  Args::IntFlag  printNSecHeaders {0, "n-sec-header", "nsh", "number of seciton headers to print. (0=all)"}

  Args::BoolFlag printSegHeaders  {"prog-headers", "ph", "prints program (segment) headers"};
  Args::IntFlag  printNSegHeaders {0, "n-prog-header", "nph", "number of program (segment) headers to print. (0=all)"}

  Args::MultiStrFlag printSymbolTables{"symbol-table", "st", "prints all symbols & seciton info of specified symbol table. Multiple values can be specified in a comma seperated list. No symbol table specified = all symbol tables"};

  Args::StrFlag input{"input", "i", "input elf file"};

  Args::Parser parser
  {
    printElfHeader,
    printSecHeaders,
    printNSecHeaders,
    printSegHeaders,
    printNSegHeaders,
    input
  };

  std::vector<std::string> unhandled = parser.Parse(argc, argv);

  if(unhandled.count > 0 && !input.Set)
    input = unhandled[0];


  std::ifstream file{input, std::ios::binary};

  Elf elf;
  elf.Parse(file);

  if(printElfHeader)
    PrintElfHeader(elf);

  if(printSecHeaders)
    PrintElfSecHeaders(elf, printNSecHeaders);

  if(printSegHeader)
    PrintElfSegHeaders(elf, printNSegHeaders);

  if(printSymbolTables.Set)
  {
    if(printSymbolTables.Strings.count == 0)
      PrintElfSymbolTable(elf);

  }


  return 0;
}

//./a.out remote -remote2 test 3
