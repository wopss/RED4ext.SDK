#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink { 
struct PlatformSpecificImageController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkPlatformSpecificImageController";
    static constexpr const char* ALIAS = NAME;

    RaRef<ink::TextureAtlas> textureAtlas; // 68
    RaRef<ink::TextureAtlas> textureAtlas_PS4; // 70
    RaRef<ink::TextureAtlas> textureAtlas_XB1; // 78
    CName partName; // 80
    CName partName_PS4; // 88
    CName partName_XB1; // 90
};
RED4EXT_ASSERT_SIZE(PlatformSpecificImageController, 0x98);
} // namespace ink
} // namespace RED4ext
