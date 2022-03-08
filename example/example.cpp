#include <Aks3l/Args.hpp>

#include <iostream>

using namespace Aks3l;

int main(int argc, char** argv)
{
  Args::Flag printFoo{"--foo", "-f", "print \"foo\""};
  Args::IntFlag nFoo{1, "--nfoo", "-nf", "how many times to print \"foo\""};

  Args::StrFlag print{"--print", "-p", "prints specified message to screen"};
  Args::IntFlag nPrint{1, "--nprint", "-n", "how many times to print the message specified by the print flag"};

  Args::Parser parser
  {
    &printFoo,
    &nFoo,
    &print,
    &nPrint,
  };

  parser.ParseFlags(argc, argv);

  if(printFoo)
  {
    for(auto i = 0; i < nFoo.Value; i++)
      std::cout << "foo" << std::endl;
  }

  if(print)
  {
    for(auto i = 0; i < nPrint.Value; i++)
      std::cout << print.Value << std::endl;
  }


  return 0;
}


//Example usage of compiled program: ./a.out --foo 
//                                   ./a.out -f --nfoo 5
//                                   ./a.out --print test 
//                                   ./a.out -p test -n 10
