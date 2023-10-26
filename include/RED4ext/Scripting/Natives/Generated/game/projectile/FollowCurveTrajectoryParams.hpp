#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/TrajectoryParams.hpp>

namespace RED4ext
{
namespace ent { struct IPlacedComponent; }
namespace game { struct Object; }

namespace game::projectile
{
struct __declspec(align(0x10)) FollowCurveTrajectoryParams : game::projectile::TrajectoryParams
{
    static constexpr const char* NAME = "gameprojectileFollowCurveTrajectoryParams";
    static constexpr const char* ALIAS = "FollowCurveTrajectoryParams";

    WeakHandle<game::Object> target; // 40
    CName componentName; // 50
    WeakHandle<ent::IPlacedComponent> targetComponent; // 58
    CName targetSlotName; // 68
    Vector4 targetPosition; // 70
    float startVelocity; // 80
    float linearTimeRatio; // 84
    float interpolationTimeRatio; // 88
    float returnTimeMargin; // 8C
    float bendTimeRatio; // 90
    float bendFactor; // 94
    float angleInHitPlane; // 98
    float angleInVerticalPlane; // 9C
    bool shouldRotate; // A0
    uint8_t unkA1[0xA4 - 0xA1]; // A1
    float halfLeanAngle; // A4
    float endLeanAngle; // A8
    float angleInterpolationDuration; // AC
    float snapRadius; // B0
    float accuracy; // B4
    bool sendFollowEvent; // B8
    bool startVelocityDirectionCheck; // B9
    uint8_t unkBA[0xC0 - 0xBA]; // BA
    Vector4 offset; // C0
    Vector3 offsetInPlane; // D0
    uint8_t unkDC[0xE0 - 0xDC]; // DC
};
RED4EXT_ASSERT_SIZE(FollowCurveTrajectoryParams, 0xE0);
} // namespace game::projectile
using gameprojectileFollowCurveTrajectoryParams = game::projectile::FollowCurveTrajectoryParams;
using FollowCurveTrajectoryParams = game::projectile::FollowCurveTrajectoryParams;
} // namespace RED4ext

// clang-format on
