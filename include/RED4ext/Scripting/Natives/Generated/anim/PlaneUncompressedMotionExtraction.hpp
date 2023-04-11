#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IMotionExtraction.hpp>

namespace RED4ext
{
namespace anim
{
struct PlaneUncompressedMotionExtraction : anim::IMotionExtraction
{
    static constexpr const char* NAME = "animPlaneUncompressedMotionExtraction";
    static constexpr const char* ALIAS = NAME;

    float duration; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<Vector3> frames; // 38
};
RED4EXT_ASSERT_SIZE(PlaneUncompressedMotionExtraction, 0x48);
} // namespace anim
using animPlaneUncompressedMotionExtraction = anim::PlaneUncompressedMotionExtraction;
} // namespace RED4ext

// clang-format on
