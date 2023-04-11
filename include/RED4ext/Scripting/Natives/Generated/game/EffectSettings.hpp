#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct EffectSettings
{
    static constexpr const char* NAME = "gameEffectSettings";
    static constexpr const char* ALIAS = NAME;

    bool advancedTargetHandling; // 00
    bool synchronousProcessingForPlayer; // 01
    bool forceSynchronousProcessing; // 02
    bool tempExecuteOnlyOnce; // 03
    float tickRate; // 04
    bool useSimTimeForTick; // 08
    uint8_t unk09[0xC - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(EffectSettings, 0xC);
} // namespace game
using gameEffectSettings = game::EffectSettings;
} // namespace RED4ext

// clang-format on
