#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace vehicle { 
struct CameraManagerComponent : game::Component
{
    static constexpr const char* NAME = "vehicleCameraManagerComponent";
    static constexpr const char* ALIAS = "VehicleCameraManagerComponent";

    uint8_t unkA8[0xB8 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(CameraManagerComponent, 0xB8);
} // namespace vehicle
using VehicleCameraManagerComponent = vehicle::CameraManagerComponent;
} // namespace RED4ext
