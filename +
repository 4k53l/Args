#include <Aks3l/Args.hpp>

int main(int argc, char** argv)
{
  Aks3l::Args::Arg infile{0, "f", "file", "desc", "./example/input.txt"};
  Aks3l::Args::Arg outfile{1, "o", "out", "desc", "./example/output.txt"};
  Aks3l::Args::Flag verbose{"v", "verbose", "desc"};

  Aks3l::Args args{"Program Description",
                   infile, outfile, verbose, Aks3l::Args::HelpArg{}};


  args.parse(argc, argv);


  return 0;
}
