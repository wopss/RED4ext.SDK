#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimStateTransitionCondition.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimStateTransitionCondition_HasAnimation : anim::IAnimStateTransitionCondition
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_HasAnimation";
    static constexpr const char* ALIAS = NAME;

    CName animationName; // 30
    uint8_t unk38[0x48 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_HasAnimation, 0x48);
} // namespace anim
using animAnimStateTransitionCondition_HasAnimation = anim::AnimStateTransitionCondition_HasAnimation;
} // namespace RED4ext

// clang-format on
