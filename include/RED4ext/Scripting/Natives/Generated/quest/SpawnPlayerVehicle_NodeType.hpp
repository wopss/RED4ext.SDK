#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest { 
struct SpawnPlayerVehicle_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questSpawnPlayerVehicle_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool despawn; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    Handle<quest::UniversalRef> positionRef; // 38
    Vector3 offset; // 48
    bool driveIn; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
    CString vehicle; // 58
    CName vehicleGlobalName; // 78
    bool despawnAllEnabledVehicles; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(SpawnPlayerVehicle_NodeType, 0x88);
} // namespace quest
} // namespace RED4ext
