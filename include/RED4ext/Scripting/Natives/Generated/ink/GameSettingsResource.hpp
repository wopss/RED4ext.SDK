#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/StyleThemeDescriptor.hpp>

namespace RED4ext
{
namespace ink { struct FullscreenCompositionResource; }
namespace ink { struct TextureAtlas; }

namespace ink { 
struct GameSettingsResource : CResource
{
    static constexpr const char* NAME = "inkGameSettingsResource";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::FullscreenCompositionResource> compositionResource; // 40
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlases; // 58
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlasesPC; // 68
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlasesDurango; // 78
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlasesOrbis; // 88
    uint8_t unk98[0xB8 - 0x98]; // 98
    DynArray<ink::StyleThemeDescriptor> themes; // B8
    uint8_t unkC8[0xD0 - 0xC8]; // C8
};
RED4EXT_ASSERT_SIZE(GameSettingsResource, 0xD0);
} // namespace ink
} // namespace RED4ext
