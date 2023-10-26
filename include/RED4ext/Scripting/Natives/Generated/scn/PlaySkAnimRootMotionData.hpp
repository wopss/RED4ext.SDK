#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AnimationMotionSample.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EasingType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/Marker.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RootMotionAnimPlacementMode.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) PlaySkAnimRootMotionData
{
    static constexpr const char* NAME = "scnPlaySkAnimRootMotionData";
    static constexpr const char* ALIAS = NAME;

    bool enabled; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    scn::RootMotionAnimPlacementMode placementMode; // 04
    scn::Marker originMarker; // 08
    uint8_t unk68[0x70 - 0x68]; // 68
    Transform originOffset; // 70
    bool removePitchRollRotation; // 90
    bool meshDissolvingEnabled; // 91
    uint8_t unk92[0x94 - 0x92]; // 92
    float snapToGroundStart; // 94
    float snapToGroundEnd; // 98
    bool snapToGround; // 9C
    uint8_t unk9D[0xA0 - 0x9D]; // 9D
    float customBlendInTime; // A0
    scn::EasingType customBlendInCurve; // A4
    bool vehicleEnabledPhysicsOnEnd; // A5
    bool vehicleChangePhysicsState; // A6
    uint8_t unkA7[0xA8 - 0xA7]; // A7
    DynArray<scn::AnimationMotionSample> trajectoryLOD; // A8
    uint8_t unkB8[0xC0 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(PlaySkAnimRootMotionData, 0xC0);
} // namespace scn
using scnPlaySkAnimRootMotionData = scn::PlaySkAnimRootMotionData;
} // namespace RED4ext

// clang-format on
