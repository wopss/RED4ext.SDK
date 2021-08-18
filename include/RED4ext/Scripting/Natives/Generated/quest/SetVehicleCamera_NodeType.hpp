#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/VehicleCameraType.hpp>

namespace RED4ext
{
namespace quest { 
struct SetVehicleCamera_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questSetVehicleCamera_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::VehicleCameraType cameraType; // 30
    bool blockOtherCameras; // 31
    uint8_t unk32[0x38 - 0x32]; // 32
};
RED4EXT_ASSERT_SIZE(SetVehicleCamera_NodeType, 0x38);
} // namespace quest
} // namespace RED4ext
