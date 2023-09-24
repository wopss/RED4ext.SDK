#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectFilter_EntityTypeEntityTypeFilter.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectGroupFilter.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_EntityType : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_EntityType";
    static constexpr const char* ALIAS = NAME;

    game::EffectObjectFilter_EntityTypeEntityTypeFilter typeFilter; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_EntityType, 0x48);
} // namespace game
using gameEffectObjectFilter_EntityType = game::EffectObjectFilter_EntityType;
} // namespace RED4ext

// clang-format on
