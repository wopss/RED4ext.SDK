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
struct LoadingLayerDefinition : ink::LayerDefinition
{
    static constexpr const char* NAME = "inkLoadingLayerDefinition";
    static constexpr const char* ALIAS = NAME;

    RaRef<ink::WidgetLibraryResource> splashLoadingScreenResource; // 38
    RaRef<ink::WidgetLibraryResource> initialLoadingScreenResource; // 40
    RaRef<ink::WidgetLibraryResource> fastTravelLoadingScreenResource; // 48
    RaRef<ink::WidgetLibraryResource> fallbackLoadingScreenResource; // 50
};
RED4EXT_ASSERT_SIZE(LoadingLayerDefinition, 0x58);
} // namespace ink
using inkLoadingLayerDefinition = ink::LoadingLayerDefinition;
} // namespace RED4ext

// clang-format on
