#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimEvent.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimEvent_FoleyAction : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_FoleyAction";
    static constexpr const char* ALIAS = NAME;

    CName actionName; // 40
};
RED4EXT_ASSERT_SIZE(AnimEvent_FoleyAction, 0x48);
} // namespace anim
} // namespace RED4ext
