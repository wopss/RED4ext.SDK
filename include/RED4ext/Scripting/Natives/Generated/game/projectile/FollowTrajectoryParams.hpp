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
struct __declspec(align(0x10)) FollowTrajectoryParams : game::projectile::TrajectoryParams
{
    static constexpr const char* NAME = "gameprojectileFollowTrajectoryParams";
    static constexpr const char* ALIAS = "FollowTrajectoryParams";

    float startVel; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    WeakHandle<game::Object> target; // 48
    WeakHandle<ent::IPlacedComponent> targetComponent; // 58
    float accuracy; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    Vector4 targetOffset; // 70
};
RED4EXT_ASSERT_SIZE(FollowTrajectoryParams, 0x80);
} // namespace game::projectile
using gameprojectileFollowTrajectoryParams = game::projectile::FollowTrajectoryParams;
using FollowTrajectoryParams = game::projectile::FollowTrajectoryParams;
} // namespace RED4ext

// clang-format on
