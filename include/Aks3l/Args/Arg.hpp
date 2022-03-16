#pragma once

#include <string>

namespace Aks3l{namespace Args{

struct Arg
{
  public:
    std::string Name;
    std::string Alias;
    std::string Desc;

  public:
    Arg(std::string name, std::string alias="", std::string desc=""):
      Name{name}, Alias{alias}, Desc{desc}, m_set{false}
    {}
};

struct Flag : public Arg
{
  bool Set;
}


struct StrArg : public Arg
{
  public:
    std::string Value;

  public:
    using Arg::Arg;
};


/*
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
*/

}}
