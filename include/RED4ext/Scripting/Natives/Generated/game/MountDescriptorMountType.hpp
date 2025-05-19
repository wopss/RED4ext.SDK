#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class MountDescriptorMountType : int32_t
{
    Unmounted = 0,
    KeepState = 1,
    Vehicle = 3,
    MovingPlatform = 4,
};
} // namespace game
using gameMountDescriptorMountType = game::MountDescriptorMountType;
using MountDescriptor_MountingType = game::MountDescriptorMountType;
} // namespace RED4ext

// clang-format on
