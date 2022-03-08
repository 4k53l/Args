#pragma once

#include "Args/Arg.hpp"
#include "Args/Flag.hpp"

namespace Aks3l
{
class Args
{
  public:
    Args() = default;
    virtual ~Args() = default;

    void Parse(int argc, char** argv)
    {
      (void)argc;
      (void)argv;
    }
  
};




}

