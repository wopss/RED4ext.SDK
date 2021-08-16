#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/EffectInputParameter_Float.hpp>
#include <RED4ext/Types/generated/game/EffectObjectSingleFilter.hpp>

namespace RED4ext
{
namespace game { 
struct EffectFilter_ReachableByAcousticGraph : game::EffectObjectSingleFilter
{
    static constexpr const char* NAME = "gameEffectFilter_ReachableByAcousticGraph";
    static constexpr const char* ALIAS = NAME;

    game::EffectInputParameter_Float maxPathLength; // 40
};
RED4EXT_ASSERT_SIZE(EffectFilter_ReachableByAcousticGraph, 0x58);
} // namespace game
} // namespace RED4ext
