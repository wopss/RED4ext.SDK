#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace minimap { struct EncodedShapes; }

struct __declspec(align(0x10)) MinimapDataNode : world::Node
{
    static constexpr const char* NAME = "MinimapDataNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x40 - 0x38]; // 38
    Box localBounds; // 40
    float streamingDistance; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    RaRef<minimap::EncodedShapes> encodedShapesRef; // 68
    bool allInteriorShapes; // 70
    uint8_t unk71[0x80 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(MinimapDataNode, 0x80);
} // namespace RED4ext

// clang-format on
