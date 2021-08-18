#pragma once

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
namespace scn { 
struct PlaySkAnimRootMotionData
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
    float customBlendInTime; // 94
    scn::EasingType customBlendInCurve; // 98
    bool vehicleEnabledPhysicsOnEnd; // 99
    bool vehicleChangePhysicsState; // 9A
    uint8_t unk9B[0xA0 - 0x9B]; // 9B
    DynArray<scn::AnimationMotionSample> trajectoryLOD; // A0
};
RED4EXT_ASSERT_SIZE(PlaySkAnimRootMotionData, 0xB0);
} // namespace scn
} // namespace RED4ext
