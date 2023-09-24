#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VehicleFxWheelsDecalsMaterial_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct VehicleFxWheelsDecalsMaterialSmear_Record : game::data::VehicleFxWheelsDecalsMaterial_Record
{
    static constexpr const char* NAME = "gamedataVehicleFxWheelsDecalsMaterialSmear_Record";
    static constexpr const char* ALIAS = "VehicleFxWheelsDecalsMaterialSmear_Record";

    uint8_t unk70[0x80 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(VehicleFxWheelsDecalsMaterialSmear_Record, 0x80);
} // namespace game::data
using gamedataVehicleFxWheelsDecalsMaterialSmear_Record = game::data::VehicleFxWheelsDecalsMaterialSmear_Record;
using VehicleFxWheelsDecalsMaterialSmear_Record = game::data::VehicleFxWheelsDecalsMaterialSmear_Record;
} // namespace RED4ext

// clang-format on
