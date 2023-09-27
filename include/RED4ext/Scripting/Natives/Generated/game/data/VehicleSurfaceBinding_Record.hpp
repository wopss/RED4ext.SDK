#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct VehicleSurfaceBinding_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleSurfaceBinding_Record";
    static constexpr const char* ALIAS = "VehicleSurfaceBinding_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleSurfaceBinding_Record, 0x60);
} // namespace game::data
using gamedataVehicleSurfaceBinding_Record = game::data::VehicleSurfaceBinding_Record;
using VehicleSurfaceBinding_Record = game::data::VehicleSurfaceBinding_Record;
} // namespace RED4ext

// clang-format on
