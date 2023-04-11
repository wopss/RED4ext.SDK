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
struct EffectDuration_Infinite : game::EffectDurationModifier
{
    static constexpr const char* NAME = "gameEffectDuration_Infinite";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectDuration_Infinite, 0x40);
} // namespace game
using gameEffectDuration_Infinite = game::EffectDuration_Infinite;
} // namespace RED4ext

// clang-format on
