#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatClamp : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FloatClamp";
    static constexpr const char* ALIAS = NAME;

    float min; // 48
    float max; // 4C
    anim::FloatLink inputNode; // 50
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatClamp, 0x70);
} // namespace anim
using animAnimNode_FloatClamp = anim::AnimNode_FloatClamp;
} // namespace RED4ext

// clang-format on
