#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace minimap { struct EncodedShapes; }

struct MinimapDataNode : world::Node
{
    static constexpr const char* NAME = "MinimapDataNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x40 - 0x38]; // 38
    Box localBounds; // 40
    RaRef<minimap::EncodedShapes> encodedShapesRef; // 60
    bool allInteriorShapes; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(MinimapDataNode, 0x70);
} // namespace RED4ext
