#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IMotionExtraction.hpp>

namespace RED4ext
{
namespace anim
{
struct LinearCompressedMotionExtraction : anim::IMotionExtraction
{
    static constexpr const char* NAME = "animLinearCompressedMotionExtraction";
    static constexpr const char* ALIAS = NAME;

    float duration; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<Vector3> posFrames; // 38
    DynArray<Quaternion> rotFrames; // 48
    DynArray<float> posTime; // 58
    DynArray<float> rotTime; // 68
};
RED4EXT_ASSERT_SIZE(LinearCompressedMotionExtraction, 0x78);
} // namespace anim
using animLinearCompressedMotionExtraction = anim::LinearCompressedMotionExtraction;
} // namespace RED4ext

// clang-format on
