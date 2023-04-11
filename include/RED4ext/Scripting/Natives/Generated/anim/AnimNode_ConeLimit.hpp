#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_ConeLimit : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_ConeLimit";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex coneTransform; // 60
    anim::TransformIndex constrainedTransform; // 78
    Vector3 coneAxisLs; // 90
    Vector3 coneAxisNormalizedLs; // 9C
    Vector3 coneOffsetMs; // A8
    uint8_t unkB4[0xB8 - 0xB4]; // B4
    anim::VectorLink coneOffsetMsLink; // B8
    CurveData<float> marginEaseOutCurve; // D8
    anim::NamedTrackIndex coneLimitReached; // 110
    float limit1; // 128
    uint8_t unk12C[0x130 - 0x12C]; // 12C
    anim::FloatLink limit1Link; // 130
    anim::NamedTrackIndex limit1FloatTrack; // 150
    float paraboloidRadius1; // 168
    float limit2; // 16C
    anim::FloatLink limit2Link; // 170
    anim::NamedTrackIndex limit2FloatTrack; // 190
    float paraboloidRadius2; // 1A8
    float limit3; // 1AC
    anim::FloatLink limit3Link; // 1B0
    anim::NamedTrackIndex limit3FloatTrack; // 1D0
    float paraboloidRadius3; // 1E8
    float limit4; // 1EC
    anim::FloatLink limit4Link; // 1F0
    anim::NamedTrackIndex limit4FloatTrack; // 210
    float paraboloidRadius4; // 228
    bool debug; // 22C
    bool colorfulCone; // 22D
    bool applyDebugConeScalling; // 22E
    uint8_t unk22F[0x230 - 0x22F]; // 22F
};
RED4EXT_ASSERT_SIZE(AnimNode_ConeLimit, 0x230);
} // namespace anim
using animAnimNode_ConeLimit = anim::AnimNode_ConeLimit;
} // namespace RED4ext

// clang-format on
