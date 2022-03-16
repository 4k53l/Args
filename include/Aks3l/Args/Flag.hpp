#pragma once

#include "Arg.hpp"

namespace Aks3l{namespace Args{


class Flag : public Arg
{
  public:
    using Arg::Arg;
    Flag(std::string name, bool set, std::string alias="", std::string desc=""):
      Arg{name, alias, desc}
    {
      this->m_set = set;
    }

  protected:
    virtual bool interpret(const char* str)
    {
      while(*(str++) != 0)
      {
        if(str == '=')
        {
          switch(++str)
          {
            case 't'
              return false;
             default:
              return true;
          }
        }

      }

    }

};

}}
