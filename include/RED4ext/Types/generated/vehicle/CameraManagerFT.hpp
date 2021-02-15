#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/vehicle/CameraManager.hpp>

namespace RED4ext
{
namespace vehicle { 
struct CameraManagerFT : vehicle::CameraManager
{
    static constexpr const char* NAME = "vehicleCameraManagerFT";
    static constexpr const char* ALIAS = "VehicleCameraManagerFT";

};
RED4EXT_ASSERT_SIZE(CameraManagerFT, 0x3A0);
} // namespace vehicle
using VehicleCameraManagerFT = vehicle::CameraManagerFT;
} // namespace RED4ext
