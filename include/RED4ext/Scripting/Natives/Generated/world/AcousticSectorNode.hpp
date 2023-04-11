#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world { struct AcousticDataResource; }

namespace world
{
struct AcousticSectorNode : world::Node
{
    static constexpr const char* NAME = "worldAcousticSectorNode";
    static constexpr const char* ALIAS = NAME;

    RaRef<world::AcousticDataResource> data; // 38
    uint32_t inSectorCoordsX; // 40
    uint32_t inSectorCoordsY; // 44
    uint32_t inSectorCoordsZ; // 48
    uint32_t generatorId; // 4C
    uint8_t edgeMask; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(AcousticSectorNode, 0x58);
} // namespace world
using worldAcousticSectorNode = world::AcousticSectorNode;
} // namespace RED4ext

// clang-format on
