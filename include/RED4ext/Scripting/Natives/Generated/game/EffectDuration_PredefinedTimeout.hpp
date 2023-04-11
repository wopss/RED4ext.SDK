#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectDurationModifier.hpp>

namespace RED4ext
{
namespace game
{
struct EffectDuration_PredefinedTimeout : game::EffectDurationModifier
{
    static constexpr const char* NAME = "gameEffectDuration_PredefinedTimeout";
    static constexpr const char* ALIAS = NAME;

    float timeToLive; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(EffectDuration_PredefinedTimeout, 0x48);
} // namespace game
using gameEffectDuration_PredefinedTimeout = game::EffectDuration_PredefinedTimeout;
} // namespace RED4ext

// clang-format on
