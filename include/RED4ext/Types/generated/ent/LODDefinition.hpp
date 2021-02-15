#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>

namespace RED4ext
{
namespace ent { 
struct LODDefinition : ISerializable
{
    static constexpr const char* NAME = "entLODDefinition";
    static constexpr const char* ALIAS = NAME;

    StaticArray<float, 4> backgroundDistanceLODs; // 30
    StaticArray<float, 4> regularDistanceLODs; // 44
    StaticArray<float, 4> cinematicDistanceLODs; // 58
    StaticArray<float, 4> vehicleDistanceLODs; // 6C
    StaticArray<float, 4> cinematicVehicleDistanceLODs; // 80
    uint8_t unk94[0x98 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(LODDefinition, 0x98);
} // namespace ent
} // namespace RED4ext
