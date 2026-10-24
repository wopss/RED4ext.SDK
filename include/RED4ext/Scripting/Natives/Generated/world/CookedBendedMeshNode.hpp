#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedNode.hpp>

namespace RED4ext
{
namespace world
{
struct CookedBendedMeshNode : world::CookedNode
{
    static constexpr const char* NAME = "worldCookedBendedMeshNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x78 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(CookedBendedMeshNode, 0x78);
} // namespace world
using worldCookedBendedMeshNode = world::CookedBendedMeshNode;
} // namespace RED4ext

// clang-format on
