#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompositionPreset.hpp>

namespace RED4ext
{
struct CBitmapTexture;
namespace ink { struct CompositionPreviewSettings; }

namespace ink
{
struct FullscreenCompositionResource : CResource
{
    static constexpr const char* NAME = "inkFullscreenCompositionResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::CompositionPreset> compositionPresets; // 40
    Handle<ink::CompositionPreviewSettings> previewSettings; // 50
    RaRef<CBitmapTexture> backgroundMenuTextureUHDRes; // 60
    RaRef<CBitmapTexture> backgroundMenuTextureFHDRes; // 68
};
RED4EXT_ASSERT_SIZE(FullscreenCompositionResource, 0x70);
} // namespace ink
using inkFullscreenCompositionResource = ink::FullscreenCompositionResource;
} // namespace RED4ext

// clang-format on
