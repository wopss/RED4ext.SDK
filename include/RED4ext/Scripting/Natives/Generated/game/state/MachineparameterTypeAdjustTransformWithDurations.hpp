#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineparameterTypeAdjustTransform.hpp>

namespace RED4ext
{
namespace game::state
{
struct __declspec(align(0x10)) MachineparameterTypeAdjustTransformWithDurations : game::state::MachineparameterTypeAdjustTransform
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeAdjustTransformWithDurations";
    static constexpr const char* ALIAS = "AdjustTransformWithDurations";

    uint8_t unk60[0x90 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeAdjustTransformWithDurations, 0x90);
} // namespace game::state
using gamestateMachineparameterTypeAdjustTransformWithDurations = game::state::MachineparameterTypeAdjustTransformWithDurations;
using AdjustTransformWithDurations = game::state::MachineparameterTypeAdjustTransformWithDurations;
} // namespace RED4ext

// clang-format on
