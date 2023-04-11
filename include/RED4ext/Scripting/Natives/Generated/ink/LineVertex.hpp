#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LineType.hpp>

namespace RED4ext
{
namespace ink
{
struct LineVertex
{
    static constexpr const char* NAME = "inkLineVertex";
    static constexpr const char* ALIAS = NAME;

    Vector2 int_; // 00 -- int
    ink::LineType neType; // 08
    uint8_t unk09[0xC - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(LineVertex, 0xC);
} // namespace ink
using inkLineVertex = ink::LineVertex;
} // namespace RED4ext

// clang-format on
