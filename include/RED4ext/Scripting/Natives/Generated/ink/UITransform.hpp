#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace ink
{
struct UITransform
{
    static constexpr const char* NAME = "inkUITransform";
    static constexpr const char* ALIAS = NAME;

    Vector2 translation; // 00
    Vector2 scale; // 08
    float rotation; // 10
    Vector2 shear; // 14
    uint8_t unk1C[0x30 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(UITransform, 0x30);
} // namespace ink
using inkUITransform = ink::UITransform;
} // namespace RED4ext

// clang-format on
