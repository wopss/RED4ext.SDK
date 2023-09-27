#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/GarmentParameterChunkData.hpp>

namespace RED4ext
{
namespace ent
{
struct GarmentParameterComponentData
{
    static constexpr const char* NAME = "entGarmentParameterComponentData";
    static constexpr const char* ALIAS = NAME;

    DataBuffer compiledTriangleIndsData; // 00
    DataBuffer compiledVertexTbnData; // 28
    CRUID componentID; // 50
    uint64_t meshGeometryHash; // 58
    uint64_t visibleTrangleIndexBufferHash; // 60
    uint32_t chunksCount; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    DynArray<ent::GarmentParameterChunkData> chunks; // 70
    uint8_t unk80[0x88 - 0x80]; // 80
    bool hideComponent; // 88
    bool removeHiddenTriangles; // 89
    uint8_t unk8A[0x8B - 0x8A]; // 8A
    bool disableGarment; // 8B
    bool mergeWithInnerLayer; // 8C
    bool smoothNormalsEnabled; // 8D
    uint8_t unk8E[0x90 - 0x8E]; // 8E
    float bendPowerMultiplier; // 90
    float bendPowerOffset; // 94
    float smoothingStrength; // 98
    float smoothingThreshold; // 9C
    float smoothingExponent; // A0
    uint32_t smoothingNumNeighbours; // A4
    float garmentBorderThreshold; // A8
    uint8_t unkAC[0xB4 - 0xAC]; // AC
    uint32_t numIndices; // B4
    uint32_t numOffsets; // B8
    uint8_t unkBC[0xC0 - 0xBC]; // BC
};
RED4EXT_ASSERT_SIZE(GarmentParameterComponentData, 0xC0);
} // namespace ent
using entGarmentParameterComponentData = ent::GarmentParameterComponentData;
} // namespace RED4ext

// clang-format on
