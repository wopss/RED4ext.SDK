#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextureAtlasMapper.hpp>

namespace RED4ext
{
struct DynamicTexture;

namespace ink
{
struct DynamicTextureSlot
{
    static constexpr const char* NAME = "inkDynamicTextureSlot";
    static constexpr const char* ALIAS = NAME;

    RaRef<DynamicTexture> texture; // 00
    DynArray<ink::TextureAtlasMapper> parts; // 08
};
RED4EXT_ASSERT_SIZE(DynamicTextureSlot, 0x18);
} // namespace ink
using inkDynamicTextureSlot = ink::DynamicTextureSlot;
} // namespace RED4ext

// clang-format on
