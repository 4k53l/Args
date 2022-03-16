#pragma once

#include "Flag.hpp"

#include <string>
#include <cstdlib>

namespace Aks3l{namespace Args{

template <typename T>
class ArgT : public Flag
{
  public:
    using Flag::Flag;

  public:
    T Value;

  protected:
    friend class Parser;
    virtual void parse(const char*) = 0;
};

class StrArg : public ArgT<std::string>
{
  public:
    using ArgT<std::string>::ArgT;

  protected:
    virtual void parse(const char* value) override
    {
      this->Value = value;
    }
};

struct IntArg : public ArgT<int>
{
  public:
    using ArgT<int>::ArgT;

  protected:
  virtual void parse(const char* value) override
  {
    this->Value = atoi(value);
  }
};

}}
