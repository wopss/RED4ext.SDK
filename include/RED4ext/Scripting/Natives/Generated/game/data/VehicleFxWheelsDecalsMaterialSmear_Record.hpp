#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VehicleFxWheelsDecalsMaterial_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct VehicleFxWheelsDecalsMaterialSmear_Record : game::data::VehicleFxWheelsDecalsMaterial_Record
{
    static constexpr const char* NAME = "gamedataVehicleFxWheelsDecalsMaterialSmear_Record";
    static constexpr const char* ALIAS = "VehicleFxWheelsDecalsMaterialSmear_Record";

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(VehicleFxWheelsDecalsMaterialSmear_Record, 0x60);
} // namespace game::data
using VehicleFxWheelsDecalsMaterialSmear_Record = game::data::VehicleFxWheelsDecalsMaterialSmear_Record;
} // namespace RED4ext
