#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace gen { 
struct IRandomizationSupervisor : IScriptable
{
    static constexpr const char* NAME = "genIRandomizationSupervisor";
    static constexpr const char* ALIAS = "IRandomizationSupervisor";

};
RED4EXT_ASSERT_SIZE(IRandomizationSupervisor, 0x40);
} // namespace gen
using IRandomizationSupervisor = gen::IRandomizationSupervisor;
} // namespace RED4ext
