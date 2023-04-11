#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LayerDefinition.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace ink
{
struct PhotoModeLayerDefinition : ink::LayerDefinition
{
    static constexpr const char* NAME = "inkPhotoModeLayerDefinition";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::WidgetLibraryResource> photoModeResource; // 38
    Ref<ink::WidgetLibraryResource> stickersResource; // 50
    Ref<ink::WidgetLibraryResource> cursorResource; // 68
};
RED4EXT_ASSERT_SIZE(PhotoModeLayerDefinition, 0x80);
} // namespace ink
using inkPhotoModeLayerDefinition = ink::PhotoModeLayerDefinition;
} // namespace RED4ext

// clang-format on
