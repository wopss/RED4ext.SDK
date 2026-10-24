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
struct CookedMeshNode : world::CookedNode
{
    static constexpr const char* NAME = "worldCookedMeshNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x58 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(CookedMeshNode, 0x58);
} // namespace world
using worldCookedMeshNode = world::CookedMeshNode;
} // namespace RED4ext

// clang-format on
