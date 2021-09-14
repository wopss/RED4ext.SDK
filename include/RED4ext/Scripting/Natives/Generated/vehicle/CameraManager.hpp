#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace vehicle { 
struct CameraManager : IScriptable
{
    static constexpr const char* NAME = "vehicleCameraManager";
    static constexpr const char* ALIAS = "VehicleCameraManager";

    uint8_t unk40[0x390 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CameraManager, 0x390);
} // namespace vehicle
using VehicleCameraManager = vehicle::CameraManager;
} // namespace RED4ext
