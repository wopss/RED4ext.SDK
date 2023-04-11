#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectGroupFilter.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_OnlyNearestMelee : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_OnlyNearestMelee";
    static constexpr const char* ALIAS = NAME;

    uint32_t count; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_OnlyNearestMelee, 0x48);
} // namespace game
using gameEffectObjectFilter_OnlyNearestMelee = game::EffectObjectFilter_OnlyNearestMelee;
} // namespace RED4ext

// clang-format on
