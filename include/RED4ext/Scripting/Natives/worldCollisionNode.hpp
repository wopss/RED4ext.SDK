#pragma once

#include <RED4ext/Containers/Span.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/GeometryKey.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct CollisionActor
{
    WorldTransform transform;   // 00
    uint16_t shapeStartIndex;   // 20
    uint16_t numShapes;         // 22
    int16_t scaleIndex;         // 24
    uint8_t unk26[0x30 - 0x26]; // 26
};
RED4EXT_ASSERT_SIZE(CollisionActor, 0x30);

struct CollisionShape
{
    physics::GeometryKey geometryKey; // 00
    uint16_t materialStartIndex;      // 10
    uint16_t numMaterials;            // 12
    int16_t positionIndex;            // 14
    int16_t rotationIndex;            // 16
    uint8_t presetIndex;              // 18
    uint8_t unk19[0x20 - 0x19];       // 19
};
RED4EXT_ASSERT_SIZE(CollisionShape, 0x20);

struct CollisionDataView
{
    CollisionDataView(const DataBuffer& aDataBuffer, uint32_t aDataOffset, uint16_t aNumActors, uint16_t aNumShapeInfos,
                      uint16_t aNumShapePositions, uint16_t aNumShapeRotations, uint16_t aNumScales,
                      uint16_t aNumMaterials, uint16_t aNumPresets, uint16_t aNumShapeIndices,
                      uint16_t aNumMaterialIndices)
        : actors(reinterpret_cast<CollisionActor*>(reinterpret_cast<uintptr_t>(aDataBuffer.buffer.data) + aDataOffset),
                 aNumActors)
        , shapes(reinterpret_cast<CollisionShape*>(actors.End().Base()), aNumShapeInfos)
        , shapePositions(reinterpret_cast<Vector3*>(shapes.End().Base()), aNumShapePositions)
        , shapeRotations(reinterpret_cast<Quaternion*>(shapePositions.End().Base()), aNumShapeRotations)
        , scales(reinterpret_cast<Vector3*>(shapeRotations.End().Base()), aNumScales)
        , materials(reinterpret_cast<CName*>(scales.End().Base()), aNumMaterials)
        , presets(reinterpret_cast<CName*>(materials.End().Base()), aNumPresets)
        , shapeIndices(reinterpret_cast<uint32_t*>(presets.End().Base()), aNumShapeIndices)
        , materialIndices(reinterpret_cast<uint8_t*>(shapeIndices.End().Base()), aNumMaterialIndices)
    {
    }

    Span<CollisionActor> actors;
    Span<CollisionShape> shapes;
    Span<Vector3> shapePositions;
    Span<Quaternion> shapeRotations;
    Span<Vector3> scales;
    Span<CName> materials;
    Span<CName> presets;
    Span<uint32_t> shapeIndices;
    Span<uint8_t> materialIndices;
};

struct __declspec(align(0x10)) CollisionNode : Node
{
    static constexpr const char* NAME = "worldCollisionNode";
    static constexpr const char* ALIAS = NAME;

    CollisionDataView GetCollisionDataView() const noexcept
    {
        return {compiledData,      0,         numActors,    numShapeInfos, numShapePositions,
                numShapeRotations, numScales, numMaterials, numPresets,    numShapeIndices,
                numMaterialIndices};
    }

    uint32_t actorsOffset;          // 38
    uint32_t shapeInfosOffset;      // 3C
    uint32_t shapePositionsOffset;  // 40
    uint32_t shapeRotationsOffset;  // 44
    uint32_t scalesOffset;          // 48
    uint32_t materialsOffset;       // 4C
    uint32_t presetsOffset;         // 50
    uint32_t shapeIndicesOffset;    // 54
    uint32_t materialIndicesOffset; // 58
    DataBuffer compiledData;        // 60
    uint64_t sectorHash;            // 88
    uint16_t numActors;             // 90
    uint16_t numShapeInfos;         // 92
    uint16_t numShapePositions;     // 94
    uint16_t numShapeRotations;     // 96
    uint16_t numScales;             // 98
    uint16_t numMaterials;          // 9A
    uint16_t numPresets;            // 9C
    uint16_t numShapeIndices;       // 9E
    uint16_t numMaterialIndices;    // A0
    uint8_t lod;                    // A2
    uint8_t resourceVersion;        // A3
    uint8_t unkA4[0xB0 - 0xA4];     // A4
    Vector4 extents;                // B0
};
RED4EXT_ASSERT_SIZE(CollisionNode, 0xC0);
} // namespace world
using worldCollisionNode = world::CollisionNode;
} // namespace RED4ext
