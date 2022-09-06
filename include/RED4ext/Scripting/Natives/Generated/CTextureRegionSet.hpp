#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/TextureRegion.hpp>

namespace RED4ext
{
struct CTextureRegionSet : CResource
{
    static constexpr const char* NAME = "CTextureRegionSet";
    static constexpr const char* ALIAS = NAME;

    DynArray<rend::TextureRegion> regions; // 40
    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(CTextureRegionSet, 0x58);
} // namespace RED4ext

// clang-format on
