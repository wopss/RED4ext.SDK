#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedCollisionNode.hpp>

namespace RED4ext
{
namespace world
{
struct CookedFoliageDestructionNode : world::CookedCollisionNode
{
    static constexpr const char* NAME = "worldCookedFoliageDestructionNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk80[0x98 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(CookedFoliageDestructionNode, 0x98);
} // namespace world
using worldCookedFoliageDestructionNode = world::CookedFoliageDestructionNode;
} // namespace RED4ext

// clang-format on
