#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/inkDrawArea.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(ink::DrawArea, 0x4C);
using inkDrawArea = ink::DrawArea;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace ink
{
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
using inkDrawArea = ink::DrawArea;
} // namespace RED4ext
*/

// clang-format on
