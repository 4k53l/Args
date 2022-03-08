#include <Aks3l/Args.hpp>

int main(int argc, char** argv)
{
  Aks3l::Args args{};
  args.Parse(argc, argv);

  (void)args;

  return 0;
}
