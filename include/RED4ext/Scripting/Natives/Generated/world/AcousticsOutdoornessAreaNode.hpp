#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct AcousticsOutdoornessAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldAcousticsOutdoornessAreaNode";
    static constexpr const char* ALIAS = NAME;

    float outdoor; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(AcousticsOutdoornessAreaNode, 0x68);
} // namespace world
using worldAcousticsOutdoornessAreaNode = world::AcousticsOutdoornessAreaNode;
} // namespace RED4ext

// clang-format on
