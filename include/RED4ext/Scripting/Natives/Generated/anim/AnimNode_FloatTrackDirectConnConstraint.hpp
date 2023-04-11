#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatTrackDirectConnConstraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_FloatTrackDirectConnConstraint";
    static constexpr const char* ALIAS = NAME;

    anim::NamedTrackIndex floatTrackIndex; // 60
    anim::TransformIndex transformIndex; // 78
    float mulFactor; // 90
    anim::TransformChannel channel; // 94
    float weight; // 98
    uint8_t unk9C[0xC0 - 0x9C]; // 9C
    anim::FloatLink weightNode; // C0
    anim::FloatLink mulFactorNode; // E0
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatTrackDirectConnConstraint, 0x100);
} // namespace anim
using animAnimNode_FloatTrackDirectConnConstraint = anim::AnimNode_FloatTrackDirectConnConstraint;
} // namespace RED4ext

// clang-format on
