#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/OffMeshConnectionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SplineNode.hpp>

namespace RED4ext
{
namespace world
{
struct OffMeshConnectionNode : world::SplineNode
{
    static constexpr const char* NAME = "worldOffMeshConnectionNode";
    static constexpr const char* ALIAS = NAME;

    float radius; // 70
    bool isBidirectional; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
    world::OffMeshConnectionType type; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    DynArray<CName> tags; // 80
};
RED4EXT_ASSERT_SIZE(OffMeshConnectionNode, 0x90);
} // namespace world
using worldOffMeshConnectionNode = world::OffMeshConnectionNode;
} // namespace RED4ext

// clang-format on
