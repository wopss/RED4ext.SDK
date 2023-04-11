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
struct AnimEvent_Simple : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_Simple";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimEvent_Simple, 0x40);
} // namespace anim
using animAnimEvent_Simple = anim::AnimEvent_Simple;
} // namespace RED4ext

// clang-format on
