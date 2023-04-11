#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink { struct FontFamilyResource; }

namespace ink
{
struct LanguageFontMapping
{
    static constexpr const char* NAME = "inkLanguageFontMapping";
    static constexpr const char* ALIAS = NAME;

    CName languageCode; // 00
    RaRef<ink::FontFamilyResource> font; // 08
    int16_t fontSizeModifier; // 10
    uint8_t unk12[0x14 - 0x12]; // 12
    uint32_t trackingModifier; // 14
    float lineHeightModifier; // 18
    float fontSizeModifierFloat; // 1C
    CName styleModifer; // 20
};
RED4EXT_ASSERT_SIZE(LanguageFontMapping, 0x28);
} // namespace ink
using inkLanguageFontMapping = ink::LanguageFontMapping;
} // namespace RED4ext

// clang-format on
