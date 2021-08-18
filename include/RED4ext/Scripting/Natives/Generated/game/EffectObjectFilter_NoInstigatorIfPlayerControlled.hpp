#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectSingleFilter.hpp>

namespace RED4ext
{
namespace game { 
struct EffectObjectFilter_NoInstigatorIfPlayerControlled : game::EffectObjectSingleFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_NoInstigatorIfPlayerControlled";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_NoInstigatorIfPlayerControlled, 0x40);
} // namespace game
} // namespace RED4ext
