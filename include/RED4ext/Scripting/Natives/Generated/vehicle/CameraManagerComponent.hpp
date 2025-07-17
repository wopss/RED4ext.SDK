#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace ent { struct EntityTemplate; }

namespace vehicle
{
struct CameraManagerComponent : game::Component
{
    static constexpr const char* NAME = "vehicleCameraManagerComponent";
    static constexpr const char* ALIAS = "VehicleCameraManagerComponent";

    RaRef<ent::EntityTemplate> cinematicCameraEntityTemplate; // A8
    uint8_t unkB0[0xD0 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(CameraManagerComponent, 0xD0);
} // namespace vehicle
using vehicleCameraManagerComponent = vehicle::CameraManagerComponent;
using VehicleCameraManagerComponent = vehicle::CameraManagerComponent;
} // namespace RED4ext

// clang-format on
