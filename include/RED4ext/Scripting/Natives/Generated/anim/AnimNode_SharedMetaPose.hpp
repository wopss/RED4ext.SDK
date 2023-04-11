#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SharedMetaPose : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SharedMetaPose";
    static constexpr const char* ALIAS = NAME;

    anim::FloatLink weightLink; // 60
};
RED4EXT_ASSERT_SIZE(AnimNode_SharedMetaPose, 0x80);
} // namespace anim
using animAnimNode_SharedMetaPose = anim::AnimNode_SharedMetaPose;
} // namespace RED4ext

// clang-format on
