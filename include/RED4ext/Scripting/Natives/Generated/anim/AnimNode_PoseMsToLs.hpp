#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_PoseMsToLs : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_PoseMsToLs";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimNode_PoseMsToLs, 0x60);
} // namespace anim
using animAnimNode_PoseMsToLs = anim::AnimNode_PoseMsToLs;
} // namespace RED4ext

// clang-format on
