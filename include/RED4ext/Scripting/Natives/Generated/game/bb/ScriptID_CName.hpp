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
struct ScriptID_CName : game::bb::ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID_CName";
    static constexpr const char* ALIAS = "BlackboardID_Name";

};
RED4EXT_ASSERT_SIZE(ScriptID_CName, 0x10);
} // namespace game::bb
using gamebbScriptID_CName = game::bb::ScriptID_CName;
using BlackboardID_Name = game::bb::ScriptID_CName;
} // namespace RED4ext

// clang-format on
