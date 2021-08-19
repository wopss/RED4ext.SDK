#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectGroupFilter.hpp>

namespace RED4ext
{
namespace game { 
struct EffectObjectFilter_DistanceFromRoot : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_DistanceFromRoot";
    static constexpr const char* ALIAS = NAME;

    float rootZOffset; // 40
    float bonusRange; // 44
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_DistanceFromRoot, 0x48);
} // namespace game
} // namespace RED4ext
