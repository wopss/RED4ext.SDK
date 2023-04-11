#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/CameraPerspective.hpp>

namespace RED4ext
{
namespace vehicle
{
struct CameraManagerComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "vehicleCameraManagerComponentPS";
    static constexpr const char* ALIAS = NAME;

    vehicle::CameraPerspective perspective; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(CameraManagerComponentPS, 0x70);
} // namespace vehicle
using vehicleCameraManagerComponentPS = vehicle::CameraManagerComponentPS;
} // namespace RED4ext

// clang-format on
