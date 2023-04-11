#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/bb/ID.hpp>

namespace RED4ext
{
namespace game::bb
{
struct ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID";
    static constexpr const char* ALIAS = "BlackboardID";

    uint8_t unk00[0x8 - 0x0]; // 0
    game::bb::ID None; // 08
};
RED4EXT_ASSERT_SIZE(ScriptID, 0x10);
} // namespace game::bb
using gamebbScriptID = game::bb::ScriptID;
using BlackboardID = game::bb::ScriptID;
} // namespace RED4ext

// clang-format on
