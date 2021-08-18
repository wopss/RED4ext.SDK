#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompositionPreset.hpp>

namespace RED4ext
{
namespace ink { struct CompositionPreviewSettings; }

namespace ink { 
struct FullscreenCompositionResource : CResource
{
    static constexpr const char* NAME = "inkFullscreenCompositionResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::CompositionPreset> compositionPresets; // 40
    Handle<ink::CompositionPreviewSettings> previewSettings; // 50
};
RED4EXT_ASSERT_SIZE(FullscreenCompositionResource, 0x60);
} // namespace ink
} // namespace RED4ext
