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
struct ScriptID_String : game::bb::ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID_String";
    static constexpr const char* ALIAS = "BlackboardID_String";

};
RED4EXT_ASSERT_SIZE(ScriptID_String, 0x10);
} // namespace game::bb
using gamebbScriptID_String = game::bb::ScriptID_String;
using BlackboardID_String = game::bb::ScriptID_String;
} // namespace RED4ext

// clang-format on
