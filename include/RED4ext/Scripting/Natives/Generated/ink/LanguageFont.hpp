#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink { struct FontFamilyResource; }
namespace ink { struct LanguageFontMapper; }

namespace ink
{
struct LanguageFont
{
    static constexpr const char* NAME = "inkLanguageFont";
    static constexpr const char* ALIAS = NAME;

    RaRef<ink::FontFamilyResource> font; // 00
    Handle<ink::LanguageFontMapper> mapper; // 08
};
RED4EXT_ASSERT_SIZE(LanguageFont, 0x18);
} // namespace ink
using inkLanguageFont = ink::LanguageFont;
} // namespace RED4ext

// clang-format on
