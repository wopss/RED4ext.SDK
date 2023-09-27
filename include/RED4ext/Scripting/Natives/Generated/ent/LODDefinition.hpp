#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ent
{
struct LODDefinition : ISerializable
{
    static constexpr const char* NAME = "entLODDefinition";
    static constexpr const char* ALIAS = NAME;

    StaticArray<float, 4> backgroundDistanceLODs; // 30
    StaticArray<float, 4> regularDistanceLODs; // 44
    StaticArray<float, 4> cinematicDistanceLODs; // 58
    StaticArray<float, 4> vehicleDistanceLODs; // 6C
    StaticArray<float, 4> cinematicVehicleDistanceLODs; // 80
    StaticArray<float, 4> vehicleInteriorDistanceLODs; // 94
    StaticArray<float, 4> vehicleDecorationDistanceLODs; // A8
    StaticArray<float, 4> consoleDistanceLODs; // BC
};
RED4EXT_ASSERT_SIZE(LODDefinition, 0xD0);
} // namespace ent
using entLODDefinition = ent::LODDefinition;
} // namespace RED4ext

// clang-format on
