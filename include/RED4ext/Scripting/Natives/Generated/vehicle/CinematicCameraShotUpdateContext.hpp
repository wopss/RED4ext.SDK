#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VehicleType.hpp>

namespace RED4ext
{
namespace vehicle { struct CinematicCameraComponent; }

namespace vehicle
{
struct __declspec(align(0x10)) CinematicCameraShotUpdateContext
{
    static constexpr const char* NAME = "vehicleCinematicCameraShotUpdateContext";
    static constexpr const char* ALIAS = NAME;

    Handle<vehicle::CinematicCameraComponent> cameraComponent; // 00
    game::data::VehicleType vehicleType; // 10
    uint8_t unk14[0x20 - 0x14]; // 14
    WorldTransform vehicleTransform; // 20
    Box vehicleBoundingBox; // 40
    float vehicleSpeed; // 60
    float engineTime; // 64
    float deltaTime; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(CinematicCameraShotUpdateContext, 0x70);
} // namespace vehicle
using vehicleCinematicCameraShotUpdateContext = vehicle::CinematicCameraShotUpdateContext;
} // namespace RED4ext

// clang-format on
