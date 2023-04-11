#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimEvent.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimEvent_FoleyAction : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_FoleyAction";
    static constexpr const char* ALIAS = NAME;

    CName actionName; // 40
};
RED4EXT_ASSERT_SIZE(AnimEvent_FoleyAction, 0x48);
} // namespace anim
using animAnimEvent_FoleyAction = anim::AnimEvent_FoleyAction;
} // namespace RED4ext

// clang-format on
