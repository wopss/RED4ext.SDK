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
struct ScriptID_EntityPtr : game::bb::ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID_EntityPtr";
    static constexpr const char* ALIAS = "BlackboardID_Entity";

};
RED4EXT_ASSERT_SIZE(ScriptID_EntityPtr, 0x10);
} // namespace game::bb
using gamebbScriptID_EntityPtr = game::bb::ScriptID_EntityPtr;
using BlackboardID_Entity = game::bb::ScriptID_EntityPtr;
} // namespace RED4ext

// clang-format on
