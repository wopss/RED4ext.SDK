#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/bb/ScriptID.hpp>

namespace RED4ext
{
namespace game::bb
{
struct ScriptID_Float : game::bb::ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID_Float";
    static constexpr const char* ALIAS = "BlackboardID_Float";

};
RED4EXT_ASSERT_SIZE(ScriptID_Float, 0x10);
} // namespace game::bb
using gamebbScriptID_Float = game::bb::ScriptID_Float;
using BlackboardID_Float = game::bb::ScriptID_Float;
} // namespace RED4ext

// clang-format on
