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
struct ScriptID_Vector4 : game::bb::ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID_Vector4";
    static constexpr const char* ALIAS = "BlackboardID_Vector4";

};
RED4EXT_ASSERT_SIZE(ScriptID_Vector4, 0x10);
} // namespace game::bb
using gamebbScriptID_Vector4 = game::bb::ScriptID_Vector4;
using BlackboardID_Vector4 = game::bb::ScriptID_Vector4;
} // namespace RED4ext

// clang-format on
