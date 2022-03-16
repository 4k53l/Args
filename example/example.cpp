#include <Aks3l/Args.hpp>

using namespace Aks3l;

int main(int argc, char** argv)
{
  Args::Flag a{"test"};
  Args::StrArg input{"i", "input"};

  /*
  Args::Flag   VerboseFlag{"verbose", "v"};
  Args::StrArg arg{"name", "alias", "description"};
  Args::IntArg arg2{"name2"};


  Args::Parser parser{std::tuple<>(VerboseFlag, arg, arg2)};
  parser.Parse(argc, argv);
  */


  return 0;
}
