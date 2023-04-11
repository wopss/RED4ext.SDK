#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FontStyle.hpp>

namespace RED4ext
{
namespace ink
{
struct FontFamilyResource : CResource
{
    static constexpr const char* NAME = "inkFontFamilyResource";
    static constexpr const char* ALIAS = NAME;

    CName familyName; // 40
    DynArray<ink::FontStyle> fontStyles; // 48
};
RED4EXT_ASSERT_SIZE(FontFamilyResource, 0x58);
} // namespace ink
using inkFontFamilyResource = ink::FontFamilyResource;
} // namespace RED4ext

// clang-format on
