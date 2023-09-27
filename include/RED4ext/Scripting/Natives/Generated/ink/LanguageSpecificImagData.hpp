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

    ink::LanguageId languageID; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    RaRef<ink::TextureAtlas> textureAtlasForLanguage; // 08
    CName partNameForLanguage; // 10
};
RED4EXT_ASSERT_SIZE(LanguageSpecificImagData, 0x18);
} // namespace ink
using inkLanguageSpecificImagData = ink::LanguageSpecificImagData;
using LanguageSpecificImagData = ink::LanguageSpecificImagData;
} // namespace RED4ext

// clang-format on
