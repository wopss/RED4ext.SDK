#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink { 
struct StyleProperty
{
    static constexpr const char* NAME = "inkStyleProperty";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    CName propertyPath; // 08
    Variant value; // 10
};
RED4EXT_ASSERT_SIZE(StyleProperty, 0x28);
} // namespace ink
} // namespace RED4ext
