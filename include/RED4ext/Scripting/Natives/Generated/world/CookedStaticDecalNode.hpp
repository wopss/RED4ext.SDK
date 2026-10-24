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
struct CookedStaticDecalNode : world::CookedNode
{
    static constexpr const char* NAME = "worldCookedStaticDecalNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x68 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(CookedStaticDecalNode, 0x68);
} // namespace world
using worldCookedStaticDecalNode = world::CookedStaticDecalNode;
} // namespace RED4ext

// clang-format on
