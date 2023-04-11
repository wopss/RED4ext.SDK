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
struct ScriptID_Quaternion : game::bb::ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID_Quaternion";
    static constexpr const char* ALIAS = "BlackboardID_Quat";

};
RED4EXT_ASSERT_SIZE(ScriptID_Quaternion, 0x10);
} // namespace game::bb
using gamebbScriptID_Quaternion = game::bb::ScriptID_Quaternion;
using BlackboardID_Quat = game::bb::ScriptID_Quaternion;
} // namespace RED4ext

// clang-format on
