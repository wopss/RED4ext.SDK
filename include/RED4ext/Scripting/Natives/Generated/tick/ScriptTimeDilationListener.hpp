#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/tick/ITimeDilationListener.hpp>

namespace RED4ext
{
namespace tick
{
struct ScriptTimeDilationListener : tick::ITimeDilationListener
{
    static constexpr const char* NAME = "tickScriptTimeDilationListener";
    static constexpr const char* ALIAS = "TimeDilationListener";

};
RED4EXT_ASSERT_SIZE(ScriptTimeDilationListener, 0x40);
} // namespace tick
using tickScriptTimeDilationListener = tick::ScriptTimeDilationListener;
using TimeDilationListener = tick::ScriptTimeDilationListener;
} // namespace RED4ext

// clang-format on
