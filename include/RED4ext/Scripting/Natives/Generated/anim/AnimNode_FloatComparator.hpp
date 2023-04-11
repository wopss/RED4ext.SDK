#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EAnimGraphCompareFunc.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatComparator : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FloatComparator";
    static constexpr const char* ALIAS = NAME;

    float firstValue; // 48
    float secondValue; // 4C
    float trueValue; // 50
    float falseValue; // 54
    anim::EAnimGraphCompareFunc operation; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    anim::FloatLink firstInputLink; // 60
    anim::FloatLink secondInputLink; // 80
    anim::FloatLink trueInputLink; // A0
    anim::FloatLink falseInputLink; // C0
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatComparator, 0xE0);
} // namespace anim
using animAnimNode_FloatComparator = anim::AnimNode_FloatComparator;
} // namespace RED4ext

// clang-format on
