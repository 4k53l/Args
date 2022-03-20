#pragma once

#include <string>

namespace Aks3l{namespace Args{

struct Flag
{
  std::string Name;
  std::string Alias;
  std::string Desc;
  bool Set;

  Flag(std::string name, std::string alias="", std::string desc=""):
    Name{name}, Alias{alias}, Desc{desc}, Set{false}
  {}

  virtual ~Flag() = default;

  operator bool() const
  {
    return Set;
  }

};

struct StrFlag : public Flag
{
  std::string Value{""};

  using Flag::Flag;
};

struct IntFlag : public Flag
{
  int Value;

  using Flag::Flag;

  IntFlag(int value, std::string name, std::string alias="", std::string desc=""):
    Flag::Flag{name,alias,desc}, Value{value}
  {}

};

}}
