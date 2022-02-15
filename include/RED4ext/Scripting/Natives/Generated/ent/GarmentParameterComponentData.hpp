#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/GarmentParameterChunkData.hpp>

namespace RED4ext
{
namespace ent { 
struct GarmentParameterComponentData
{
    static constexpr const char* NAME = "entGarmentParameterComponentData";
    static constexpr const char* ALIAS = NAME;

    DataBuffer compiledTriangleIndsData; // 00
    CRUID componentID; // 28
    uint64_t meshGeometryHash; // 30
    uint64_t visibleTrangleIndexBufferHash; // 38
    uint32_t chunksCount; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    DynArray<ent::GarmentParameterChunkData> chunks; // 48
    uint8_t unk58[0x60 - 0x58]; // 58
    bool hideComponent; // 60
    bool removeHiddenTriangles; // 61
    uint8_t unk62[0x63 - 0x62]; // 62
    bool disableGarment; // 63
    bool mergeWithInnerLayer; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
    float bendPowerMultiplier; // 68
    float bendPowerOffset; // 6C
    float smoothingStrength; // 70
    float smoothingThreshold; // 74
    float smoothingExponent; // 78
    uint32_t smoothingNumNeighbours; // 7C
    float garmentBorderThreshold; // 80
    uint8_t unk84[0x8C - 0x84]; // 84
    uint32_t numIndices; // 8C
    uint32_t numOffsets; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(GarmentParameterComponentData, 0x98);
} // namespace ent
} // namespace RED4ext
