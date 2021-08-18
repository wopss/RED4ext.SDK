#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace ink { 
struct DrawArea
{
    static constexpr const char* NAME = "inkDrawArea";
    static constexpr const char* ALIAS = NAME;

    Vector2 size; // 00
    float scale; // 08
    Vector2 relativePosition; // 0C
    Vector2 absolutePosition; // 14
    uint8_t unk1C[0x4C - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(DrawArea, 0x4C);
} // namespace ink
} // namespace RED4ext
