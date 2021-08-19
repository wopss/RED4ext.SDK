#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CameraComponent.hpp>

namespace RED4ext
{
namespace vehicle { 
struct VehicleProxyBlendCamera : game::CameraComponent
{
    static constexpr const char* NAME = "vehicleVehicleProxyBlendCamera";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2A0[0x300 - 0x2A0]; // 2A0
};
RED4EXT_ASSERT_SIZE(VehicleProxyBlendCamera, 0x300);
} // namespace vehicle
} // namespace RED4ext
