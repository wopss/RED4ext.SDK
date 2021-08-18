#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AnimationMotionSample.hpp>

namespace RED4ext
{
namespace scn { 
struct CameraAnimationLOD
{
    static constexpr const char* NAME = "scnCameraAnimationLOD";
    static constexpr const char* ALIAS = NAME;

    alignas(16) StaticArray<scn::AnimationMotionSample, 3> trajectory; // 00
    StaticArray<StaticArray<float, 7>, 3> tracks; // A0
    uint8_t unk104[0x110 - 0x104]; // 104
};
RED4EXT_ASSERT_SIZE(CameraAnimationLOD, 0x110);
} // namespace scn
} // namespace RED4ext
