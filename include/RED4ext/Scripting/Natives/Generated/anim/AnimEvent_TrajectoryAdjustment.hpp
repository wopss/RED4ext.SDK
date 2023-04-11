#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimEvent.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimEvent_TrajectoryAdjustment : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_TrajectoryAdjustment";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimEvent_TrajectoryAdjustment, 0x40);
} // namespace anim
using animAnimEvent_TrajectoryAdjustment = anim::AnimEvent_TrajectoryAdjustment;
} // namespace RED4ext

// clang-format on
