#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/EditorObjectIDPath.hpp>

namespace RED4ext
{
namespace interop
{
struct __declspec(align(0x10)) TerrainNodeInfo
{
    static constexpr const char* NAME = "interopTerrainNodeInfo";
    static constexpr const char* ALIAS = NAME;

    uint32_t width; // 00
    uint32_t height; // 04
    bool externalDataSource; // 08
    bool isTerrainNode; // 09
    uint8_t blendOrder; // 0A
    bool blendModeHeightIsIgnore; // 0B
    bool blendModeHeightIsNormal; // 0C
    bool blendModeColorIsIgnore; // 0D
    bool blendModeHolesIsIgnore; // 0E
    uint8_t unk0F[0x10 - 0xF]; // F
    uint16_t terrainSysID; // 10
    uint8_t unk12[0x18 - 0x12]; // 12
    CString nodeName; // 18
    Vector3 nodeScale; // 38
    uint8_t unk44[0x50 - 0x44]; // 44
    Transform nodeTransform; // 50
    float nodeCellResScale; // 70
    float densityTexelSize; // 74
    tools::EditorObjectIDPath nodeIDPath; // 78
    uint8_t unk88[0x90 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(TerrainNodeInfo, 0x90);
} // namespace interop
using interopTerrainNodeInfo = interop::TerrainNodeInfo;
} // namespace RED4ext

// clang-format on
