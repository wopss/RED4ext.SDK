#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AdditionalFloatTrackContainer.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AdditionalTransformContainer.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace anim { struct IAnimationBuffer; }
namespace anim { struct IMotionExtraction; }

namespace anim
{
struct Animation : ISerializable
{
    static constexpr const char* NAME = "animAnimation";
    static constexpr const char* ALIAS = NAME;

    anim::AdditionalTransformContainer additionalTransforms; // 30
    anim::AdditionalFloatTrackContainer additionalTracks; // 40
    Handle<anim::IAnimationBuffer> animBuffer; // 58
    Handle<anim::IMotionExtraction> motionExtraction; // 68
    red::TagList tags; // 78
    uint8_t unk88[0x90 - 0x88]; // 88
    CName name; // 90
    float duration; // 98
    anim::AnimationType animationType; // 9C
    bool frameClamping; // 9D
    int8_t frameClampingStartFrame; // 9E
    int8_t frameClampingEndFrame; // 9F
};
RED4EXT_ASSERT_SIZE(Animation, 0xA0);
} // namespace anim
using animAnimation = anim::Animation;
} // namespace RED4ext

// clang-format on
