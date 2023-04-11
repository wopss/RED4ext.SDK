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
struct CameraManager : IScriptable
{
    static constexpr const char* NAME = "vehicleCameraManager";
    static constexpr const char* ALIAS = "VehicleCameraManager";

    uint8_t unk40[0x370 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CameraManager, 0x370);
} // namespace vehicle
using vehicleCameraManager = vehicle::CameraManager;
using VehicleCameraManager = vehicle::CameraManager;
} // namespace RED4ext

// clang-format on
