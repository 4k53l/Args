#pragma once

#include "Arg.hpp"
#include "Flag.hpp"

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
