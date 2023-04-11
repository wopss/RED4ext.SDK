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
struct EffectObjectFilter_NoInstigator : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_NoInstigator";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_NoInstigator, 0x40);
} // namespace game
using gameEffectObjectFilter_NoInstigator = game::EffectObjectFilter_NoInstigator;
} // namespace RED4ext

// clang-format on
