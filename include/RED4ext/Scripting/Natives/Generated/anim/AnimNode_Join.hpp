#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_Join : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_Join";
    static constexpr const char* ALIAS = NAME;

    anim::PoseLink input; // 48
    uint8_t unk60[0xA0 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(AnimNode_Join, 0xA0);
} // namespace anim
using animAnimNode_Join = anim::AnimNode_Join;
} // namespace RED4ext

// clang-format on
