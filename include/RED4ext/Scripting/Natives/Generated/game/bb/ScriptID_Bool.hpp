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
struct ScriptID_Bool : game::bb::ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID_Bool";
    static constexpr const char* ALIAS = "BlackboardID_Bool";

};
RED4EXT_ASSERT_SIZE(ScriptID_Bool, 0x10);
} // namespace game::bb
using gamebbScriptID_Bool = game::bb::ScriptID_Bool;
using BlackboardID_Bool = game::bb::ScriptID_Bool;
} // namespace RED4ext

// clang-format on
