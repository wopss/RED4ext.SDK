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
struct CookedAcousticSectorNode : world::CookedNode
{
    static constexpr const char* NAME = "worldCookedAcousticSectorNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x60 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(CookedAcousticSectorNode, 0x60);
} // namespace world
using worldCookedAcousticSectorNode = world::CookedAcousticSectorNode;
} // namespace RED4ext

// clang-format on
