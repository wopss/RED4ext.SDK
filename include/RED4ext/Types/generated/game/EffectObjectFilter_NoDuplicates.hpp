#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/EffectObjectGroupFilter.hpp>

namespace RED4ext
{
namespace game { 
struct EffectObjectFilter_NoDuplicates : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_NoDuplicates";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_NoDuplicates, 0x40);
} // namespace game
} // namespace RED4ext
