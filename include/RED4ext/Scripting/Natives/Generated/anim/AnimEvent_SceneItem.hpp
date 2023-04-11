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
struct AnimEvent_SceneItem : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_SceneItem";
    static constexpr const char* ALIAS = NAME;

    CName boneName; // 40
};
RED4EXT_ASSERT_SIZE(AnimEvent_SceneItem, 0x48);
} // namespace anim
using animAnimEvent_SceneItem = anim::AnimEvent_SceneItem;
} // namespace RED4ext

// clang-format on
