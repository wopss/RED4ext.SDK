#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/NodeSocketType.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) ExtractedNodeSocket
{
    static constexpr const char* NAME = "worldExtractedNodeSocket";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CName displayName; // 08
    Vector3 position; // 10
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    Quaternion rotation; // 20
    Vector3 direction; // 30
    world::NodeSocketType type; // 3C
    bool isSnapped; // 3D
    Color color; // 3E
    uint8_t unk42[0x50 - 0x42]; // 42
};
RED4EXT_ASSERT_SIZE(ExtractedNodeSocket, 0x50);
} // namespace world
using worldExtractedNodeSocket = world::ExtractedNodeSocket;
} // namespace RED4ext

// clang-format on
