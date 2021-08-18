#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace tick { 
struct ITimeDilationListener : IScriptable
{
    static constexpr const char* NAME = "tickITimeDilationListener";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ITimeDilationListener, 0x40);
} // namespace tick
} // namespace RED4ext
