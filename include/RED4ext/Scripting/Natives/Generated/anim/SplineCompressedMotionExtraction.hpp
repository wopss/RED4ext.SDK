#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IMotionExtraction.hpp>

namespace RED4ext
{
namespace anim { 
struct SplineCompressedMotionExtraction : anim::IMotionExtraction
{
    static constexpr const char* NAME = "animSplineCompressedMotionExtraction";
    static constexpr const char* ALIAS = NAME;

    float duration; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<uint8_t> posKeysData; // 38
    DynArray<uint8_t> rotKeysData; // 48
};
RED4EXT_ASSERT_SIZE(SplineCompressedMotionExtraction, 0x58);
} // namespace anim
} // namespace RED4ext
