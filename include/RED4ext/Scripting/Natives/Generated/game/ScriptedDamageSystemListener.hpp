#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDamageSystemListener.hpp>

namespace RED4ext
{
namespace game
{
struct ScriptedDamageSystemListener : game::IDamageSystemListener
{
    static constexpr const char* NAME = "gameScriptedDamageSystemListener";
    static constexpr const char* ALIAS = "ScriptedDamageSystemListener";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ScriptedDamageSystemListener, 0x58);
} // namespace game
using gameScriptedDamageSystemListener = game::ScriptedDamageSystemListener;
using ScriptedDamageSystemListener = game::ScriptedDamageSystemListener;
} // namespace RED4ext

// clang-format on
