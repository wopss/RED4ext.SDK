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
struct ScriptID_EulerAngles : game::bb::ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID_EulerAngles";
    static constexpr const char* ALIAS = "BlackboardID_EulerAngles";

};
RED4EXT_ASSERT_SIZE(ScriptID_EulerAngles, 0x10);
} // namespace game::bb
using gamebbScriptID_EulerAngles = game::bb::ScriptID_EulerAngles;
using BlackboardID_EulerAngles = game::bb::ScriptID_EulerAngles;
} // namespace RED4ext

// clang-format on
