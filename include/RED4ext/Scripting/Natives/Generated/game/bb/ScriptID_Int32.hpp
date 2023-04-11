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
struct ScriptID_Int32 : game::bb::ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID_Int32";
    static constexpr const char* ALIAS = "BlackboardID_Int";

};
RED4EXT_ASSERT_SIZE(ScriptID_Int32, 0x10);
} // namespace game::bb
using gamebbScriptID_Int32 = game::bb::ScriptID_Int32;
using BlackboardID_Int = game::bb::ScriptID_Int32;
} // namespace RED4ext

// clang-format on
