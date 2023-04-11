#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim
{
struct BoneTraceCondition : ISerializable
{
    static constexpr const char* NAME = "animBoneTraceCondition";
    static constexpr const char* ALIAS = NAME;

    int16_t boneIndex; // 30
    bool traceByRotation; // 32
    uint8_t unk33[0x34 - 0x33]; // 33
    float rotationAngleTolerance; // 34
    bool traceByTranslation; // 38
    uint8_t unk39[0x3C - 0x39]; // 39
    float translationTolerance; // 3C
};
RED4EXT_ASSERT_SIZE(BoneTraceCondition, 0x40);
} // namespace anim
using animBoneTraceCondition = anim::BoneTraceCondition;
} // namespace RED4ext

// clang-format on
