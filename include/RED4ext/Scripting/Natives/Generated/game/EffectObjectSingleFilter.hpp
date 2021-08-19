#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectFilter.hpp>

namespace RED4ext
{
namespace game { 
struct EffectObjectSingleFilter : game::EffectObjectFilter
{
    static constexpr const char* NAME = "gameEffectObjectSingleFilter";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectObjectSingleFilter, 0x40);
} // namespace game
} // namespace RED4ext
