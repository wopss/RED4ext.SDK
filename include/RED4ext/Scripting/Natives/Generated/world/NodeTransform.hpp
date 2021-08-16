#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace world { 
struct NodeTransform
{
    static constexpr const char* NAME = "worldNodeTransform";
    static constexpr const char* ALIAS = NAME;

    Vector3 translation; // 00
    uint8_t unk0C[0x10 - 0xC]; // C
    Quaternion rotation; // 10
    Vector3 scale; // 20
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(NodeTransform, 0x30);
} // namespace world
} // namespace RED4ext
