#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink
{
struct PlatformSpecificImageController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkPlatformSpecificImageController";
    static constexpr const char* ALIAS = "PlatformSpecificImageController";

    RaRef<ink::TextureAtlas> textureAtlas; // 78
    RaRef<ink::TextureAtlas> textureAtlas_PS4; // 80
    RaRef<ink::TextureAtlas> textureAtlas_Prospero; // 88
    RaRef<ink::TextureAtlas> textureAtlas_XB1; // 90
    RaRef<ink::TextureAtlas> textureAtlas_Scarlett; // 98
    CName partName; // A0
    CName partName_PS4; // A8
    CName partName_Prospero; // B0
    CName partName_XB1; // B8
    CName partName_Scarlett; // C0
};
RED4EXT_ASSERT_SIZE(PlatformSpecificImageController, 0xC8);
} // namespace ink
using inkPlatformSpecificImageController = ink::PlatformSpecificImageController;
using PlatformSpecificImageController = ink::PlatformSpecificImageController;
} // namespace RED4ext

// clang-format on
