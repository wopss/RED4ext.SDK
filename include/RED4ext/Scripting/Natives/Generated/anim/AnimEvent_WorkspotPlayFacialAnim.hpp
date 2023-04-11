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
struct AnimEvent_WorkspotPlayFacialAnim : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_WorkspotPlayFacialAnim";
    static constexpr const char* ALIAS = NAME;

    CName facialAnimName; // 40
};
RED4EXT_ASSERT_SIZE(AnimEvent_WorkspotPlayFacialAnim, 0x48);
} // namespace anim
using animAnimEvent_WorkspotPlayFacialAnim = anim::AnimEvent_WorkspotPlayFacialAnim;
} // namespace RED4ext

// clang-format on
