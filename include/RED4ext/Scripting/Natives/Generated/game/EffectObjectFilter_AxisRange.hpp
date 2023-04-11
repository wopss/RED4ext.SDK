#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectInputParameter_Vector.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectFilter_AxisRangeAxis.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectSingleFilter.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_AxisRange : game::EffectObjectSingleFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_AxisRange";
    static constexpr const char* ALIAS = NAME;

    game::EffectObjectFilter_AxisRangeAxis axis; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    game::EffectInputParameter_Vector position; // 48
    game::EffectInputParameter_Vector constraints; // 60
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_AxisRange, 0x78);
} // namespace game
using gameEffectObjectFilter_AxisRange = game::EffectObjectFilter_AxisRange;
} // namespace RED4ext

// clang-format on
