#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/Axis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TwistOutput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TwistConstraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_TwistConstraint";
    static constexpr const char* ALIAS = NAME;

    anim::Axis frontAxis; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    anim::TransformIndex transformA; // 68
    anim::TransformIndex transformB; // 80
    DynArray<anim::TwistOutput> outputs; // 98
    bool debug; // A8
    uint8_t unkA9[0xB0 - 0xA9]; // A9
};
RED4EXT_ASSERT_SIZE(AnimNode_TwistConstraint, 0xB0);
} // namespace anim
using animAnimNode_TwistConstraint = anim::AnimNode_TwistConstraint;
} // namespace RED4ext

// clang-format on
