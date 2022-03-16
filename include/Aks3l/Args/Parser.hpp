#pragma once

namespace Aks3l{namespace Args{

class Parser
{
  public:
    template<class... Args>
    Parser(std::tuple<Args&...> args)
    {

    }

    virtual ~Parser() = default;

    void Parse(int argc, char** argv)
    {
      (void)argc;
      (void)argv;
      //...
    }

  private:
    std::vector<Flag&> Args;

};

}}
