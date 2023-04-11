#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim { struct ActionAnimDatabase; }
namespace anim { struct IAnimStateTransitionCondition; }
namespace anim { struct IAnimStateTransitionInterpolator; }
namespace anim { struct ISyncMethod; }

namespace anim
{
struct AnimStateTransitionDescription : ISerializable
{
    static constexpr const char* NAME = "animAnimStateTransitionDescription";
    static constexpr const char* ALIAS = NAME;

    uint32_t targetStateIndex; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    Handle<anim::IAnimStateTransitionCondition> condition; // 38
    Handle<anim::IAnimStateTransitionInterpolator> interpolator; // 48
    int32_t priority; // 58
    bool isEnabled; // 5C
    bool isForcedToTrue; // 5D
    bool supportBlendFromPose; // 5E
    uint8_t unk5F[0x60 - 0x5F]; // 5F
    Handle<anim::ISyncMethod> syncMethod; // 60
    float duration; // 70
    bool canRequestInertialization; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
    CName animFeatureName; // 78
    Ref<anim::ActionAnimDatabase> actionAnimDatabaseRef; // 80
    bool isOutTransitionFromAction; // 98
    uint8_t unk99[0x110 - 0x99]; // 99
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionDescription, 0x110);
} // namespace anim
using animAnimStateTransitionDescription = anim::AnimStateTransitionDescription;
} // namespace RED4ext

// clang-format on
