#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystem.hpp>

namespace RED4ext
{
namespace game { 
struct NativeHudManager : game::ScriptableSystem
{
    static constexpr const char* NAME = "gameNativeHudManager";
    static constexpr const char* ALIAS = "NativeHudManager";

    uint8_t unk2D8[0x348 - 0x2D8]; // 2D8
};
RED4EXT_ASSERT_SIZE(NativeHudManager, 0x348);
} // namespace game
using NativeHudManager = game::NativeHudManager;
} // namespace RED4ext
