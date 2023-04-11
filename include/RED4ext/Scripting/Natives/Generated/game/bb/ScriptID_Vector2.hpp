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
struct ScriptID_Vector2 : game::bb::ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID_Vector2";
    static constexpr const char* ALIAS = "BlackboardID_Vector2";

};
RED4EXT_ASSERT_SIZE(ScriptID_Vector2, 0x10);
} // namespace game::bb
using gamebbScriptID_Vector2 = game::bb::ScriptID_Vector2;
using BlackboardID_Vector2 = game::bb::ScriptID_Vector2;
} // namespace RED4ext

// clang-format on
