#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/TextureRegionPart.hpp>

namespace RED4ext
{
namespace rend
{
struct TextureRegion : ISerializable
{
    static constexpr const char* NAME = "rendTextureRegion";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
    bool isStretch; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    DynArray<rend::TextureRegionPart> regionParts; // 40
};
RED4EXT_ASSERT_SIZE(TextureRegion, 0x50);
} // namespace rend
using rendTextureRegion = rend::TextureRegion;
} // namespace RED4ext

// clang-format on
