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
struct VehicleSurfaceType_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleSurfaceType_Record";
    static constexpr const char* ALIAS = "VehicleSurfaceType_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleSurfaceType_Record, 0x60);
} // namespace game::data
using gamedataVehicleSurfaceType_Record = game::data::VehicleSurfaceType_Record;
using VehicleSurfaceType_Record = game::data::VehicleSurfaceType_Record;
} // namespace RED4ext

// clang-format on
