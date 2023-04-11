#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/GIGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct GISpaceNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldGISpaceNode";
    static constexpr const char* ALIAS = NAME;

    rend::GIGroup group; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    uint32_t priority; // 64
    bool interior; // 68
    bool runtime; // 69
    uint8_t unk6A[0x6B - 0x6A]; // 6A
    bool updated; // 6B
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(GISpaceNode, 0x70);
} // namespace world
using worldGISpaceNode = world::GISpaceNode;
} // namespace RED4ext

// clang-format on
