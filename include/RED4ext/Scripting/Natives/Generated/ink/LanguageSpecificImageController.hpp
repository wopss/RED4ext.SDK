#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LanguageId.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink { 
struct LanguageSpecificImageController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkLanguageSpecificImageController";
    static constexpr const char* ALIAS = "LanguageSpecificImageController";

    RaRef<ink::TextureAtlas> textureAtlasForLanguage; // 78
    CName partNameForLanguage; // 80
    DynArray<ink::LanguageId> languages; // 88
    RaRef<ink::TextureAtlas> fallbackTextureAtlas; // 98
    CName fallbackPartName; // A0
};
RED4EXT_ASSERT_SIZE(LanguageSpecificImageController, 0xA8);
} // namespace ink
using LanguageSpecificImageController = ink::LanguageSpecificImageController;
} // namespace RED4ext
