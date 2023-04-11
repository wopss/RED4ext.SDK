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
struct ScriptID_EntityID : game::bb::ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID_EntityID";
    static constexpr const char* ALIAS = "BlackboardID_EntityID";

};
RED4EXT_ASSERT_SIZE(ScriptID_EntityID, 0x10);
} // namespace game::bb
using gamebbScriptID_EntityID = game::bb::ScriptID_EntityID;
using BlackboardID_EntityID = game::bb::ScriptID_EntityID;
} // namespace RED4ext

// clang-format on
