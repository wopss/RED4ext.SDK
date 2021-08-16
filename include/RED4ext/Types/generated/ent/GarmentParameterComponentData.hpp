#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/GarmentParameterChunkData.hpp>

namespace RED4ext
{
namespace ent { 
struct GarmentParameterComponentData
{
    static constexpr const char* NAME = "entGarmentParameterComponentData";
    static constexpr const char* ALIAS = NAME;

    CRUID componentID; // 00
    uint64_t meshGeometryHash; // 08
    DynArray<ent::GarmentParameterChunkData> chunks; // 10
    uint8_t unk20[0x28 - 0x20]; // 20
    bool hideComponent; // 28
    bool removeHiddenTriangles; // 29
    uint8_t unk2A[0x2B - 0x2A]; // 2A
    bool disableGarment; // 2B
    bool mergeWithInnerLayer; // 2C
    uint8_t unk2D[0x30 - 0x2D]; // 2D
    float bendPowerMultiplier; // 30
    float bendPowerOffset; // 34
    float smoothingStrength; // 38
    float smoothingThreshold; // 3C
    float smoothingExponent; // 40
    uint32_t smoothingNumNeighbours; // 44
    float garmentBorderThreshold; // 48
    uint8_t unk4C[0x58 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(GarmentParameterComponentData, 0x58);
} // namespace ent
} // namespace RED4ext
