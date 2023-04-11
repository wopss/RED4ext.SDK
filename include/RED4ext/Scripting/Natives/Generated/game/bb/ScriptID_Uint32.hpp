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
struct ScriptID_Uint32 : game::bb::ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID_Uint32";
    static constexpr const char* ALIAS = "BlackboardID_Uint";

};
RED4EXT_ASSERT_SIZE(ScriptID_Uint32, 0x10);
} // namespace game::bb
using gamebbScriptID_Uint32 = game::bb::ScriptID_Uint32;
using BlackboardID_Uint = game::bb::ScriptID_Uint32;
} // namespace RED4ext

// clang-format on
