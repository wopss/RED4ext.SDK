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
struct EffectDuration_Instant : game::EffectDurationModifier
{
    static constexpr const char* NAME = "gameEffectDuration_Instant";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectDuration_Instant, 0x40);
} // namespace game
using gameEffectDuration_Instant = game::EffectDuration_Instant;
} // namespace RED4ext

// clang-format on
