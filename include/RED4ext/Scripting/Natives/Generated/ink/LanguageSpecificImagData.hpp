#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LanguageId.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink
{
struct LanguageSpecificImagData
{
    static constexpr const char* NAME = "inkLanguageSpecificImagData";
    static constexpr const char* ALIAS = "LanguageSpecificImagData";

    RaRef<ink::TextureAtlas> textureAtlasForLanguage; // 00
    CName partNameForLanguage; // 08
    ink::LanguageId languageID; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(LanguageSpecificImagData, 0x18);
} // namespace ink
using inkLanguageSpecificImagData = ink::LanguageSpecificImagData;
using LanguageSpecificImagData = ink::LanguageSpecificImagData;
} // namespace RED4ext

// clang-format on
