#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace vehicle
{
struct CinematicCameraManager : IScriptable
{
    static constexpr const char* NAME = "vehicleCinematicCameraManager";
    static constexpr const char* ALIAS = "VehicleCinematicCameraManager";

    uint8_t unk40[0xF0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CinematicCameraManager, 0xF0);
} // namespace vehicle
using vehicleCinematicCameraManager = vehicle::CinematicCameraManager;
using VehicleCinematicCameraManager = vehicle::CinematicCameraManager;
} // namespace RED4ext

// clang-format on
