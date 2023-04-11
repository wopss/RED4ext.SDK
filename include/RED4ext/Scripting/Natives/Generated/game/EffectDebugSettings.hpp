#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>

namespace RED4ext
{
namespace game
{
struct EffectDebugSettings
{
    static constexpr const char* NAME = "gameEffectDebugSettings";
    static constexpr const char* ALIAS = NAME;

    bool overrideGlobalSettings; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    float duration; // 04
    Color color; // 08
};
RED4EXT_ASSERT_SIZE(EffectDebugSettings, 0xC);
} // namespace game
using gameEffectDebugSettings = game::EffectDebugSettings;
} // namespace RED4ext

// clang-format on
