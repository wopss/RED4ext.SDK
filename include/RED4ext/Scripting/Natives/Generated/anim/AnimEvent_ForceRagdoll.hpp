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
struct AnimEvent_ForceRagdoll : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_ForceRagdoll";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimEvent_ForceRagdoll, 0x40);
} // namespace anim
using animAnimEvent_ForceRagdoll = anim::AnimEvent_ForceRagdoll;
} // namespace RED4ext

// clang-format on
