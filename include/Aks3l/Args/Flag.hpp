#pragma once

#include <string>

namespace Aks3l{namespace Args{

struct Flag
{
    Flag(std::string name, std::string alias="", std::string desc=""):
      Name{name}, Alias{alias}, Desc{desc} {}

    std::string Name;
    std::string Alias;
    std::string Desc;

    bool Set{false};
};


}}
