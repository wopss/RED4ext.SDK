#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectFilter.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectGroupFilter : game::EffectObjectFilter
{
    static constexpr const char* NAME = "gameEffectObjectGroupFilter";
    static constexpr const char* ALIAS = "EffectObjectGroupFilter";

};
RED4EXT_ASSERT_SIZE(EffectObjectGroupFilter, 0x40);
} // namespace game
using gameEffectObjectGroupFilter = game::EffectObjectGroupFilter;
using EffectObjectGroupFilter = game::EffectObjectGroupFilter;
} // namespace RED4ext

// clang-format on
