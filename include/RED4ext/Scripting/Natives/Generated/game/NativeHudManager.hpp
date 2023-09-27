#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystem.hpp>

namespace RED4ext
{
namespace game
{
struct NativeHudManager : game::ScriptableSystem
{
    static constexpr const char* NAME = "gameNativeHudManager";
    static constexpr const char* ALIAS = "NativeHudManager";

    uint8_t unk530[0x5D0 - 0x530]; // 530
};
RED4EXT_ASSERT_SIZE(NativeHudManager, 0x5D0);
} // namespace game
using gameNativeHudManager = game::NativeHudManager;
using NativeHudManager = game::NativeHudManager;
} // namespace RED4ext

// clang-format on
