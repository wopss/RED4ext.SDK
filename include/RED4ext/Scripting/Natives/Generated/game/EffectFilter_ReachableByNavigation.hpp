#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectInputParameter_Float.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectSingleFilter.hpp>

namespace RED4ext
{
namespace game
{
struct EffectFilter_ReachableByNavigation : game::EffectObjectSingleFilter
{
    static constexpr const char* NAME = "gameEffectFilter_ReachableByNavigation";
    static constexpr const char* ALIAS = NAME;

    game::EffectInputParameter_Float maxPathLength; // 40
};
RED4EXT_ASSERT_SIZE(EffectFilter_ReachableByNavigation, 0x58);
} // namespace game
using gameEffectFilter_ReachableByNavigation = game::EffectFilter_ReachableByNavigation;
} // namespace RED4ext

// clang-format on
