#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/TrajectoryParams.hpp>

namespace RED4ext
{
namespace ent { struct IPlacedComponent; }
namespace game { struct Object; }

namespace game::projectile
{
struct __declspec(align(0x10)) AccelerateTowardsTrajectoryParams : game::projectile::TrajectoryParams
{
    static constexpr const char* NAME = "gameprojectileAccelerateTowardsTrajectoryParams";
    static constexpr const char* ALIAS = "AccelerateTowardsTrajectoryParams";

    float accelerationSpeed; // 40
    float maxSpeed; // 44
    float decelerateTowardsTargetPositionDistance; // 48
    float maxRotationSpeed; // 4C
    float minRotationSpeed; // 50
    float diffForMaxRotation; // 54
    float accuracy; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    WeakHandle<game::Object> target; // 60
    WeakHandle<ent::IPlacedComponent> targetComponent; // 70
    Vector4 targetPosition; // 80
    Vector4 targetOffset; // 90
};
RED4EXT_ASSERT_SIZE(AccelerateTowardsTrajectoryParams, 0xA0);
} // namespace game::projectile
using gameprojectileAccelerateTowardsTrajectoryParams = game::projectile::AccelerateTowardsTrajectoryParams;
using AccelerateTowardsTrajectoryParams = game::projectile::AccelerateTowardsTrajectoryParams;
} // namespace RED4ext

// clang-format on
