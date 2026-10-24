#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedNode.hpp>

namespace RED4ext
{
namespace world
{
struct CookedCollisionNode : world::CookedNode
{
    static constexpr const char* NAME = "worldCookedCollisionNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x58 - 0x38]; // 38
    DataBuffer compiledData; // 58
};
RED4EXT_ASSERT_SIZE(CookedCollisionNode, 0x80);
} // namespace world
using worldCookedCollisionNode = world::CookedCollisionNode;
} // namespace RED4ext

// clang-format on
