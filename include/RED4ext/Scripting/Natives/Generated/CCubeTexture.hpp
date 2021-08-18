#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ITexture.hpp>
#include <RED4ext/Scripting/Natives/Generated/STextureGroupSetup.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderTextureResource.hpp>

namespace RED4ext
{
struct IRenderResourceBlob;

struct CCubeTexture : ITexture
{
    static constexpr const char* NAME = "CCubeTexture";
    static constexpr const char* ALIAS = NAME;

    uint32_t size; // 40
    STextureGroupSetup setup; // 44
    uint8_t unk54[0x60 - 0x54]; // 54
    Handle<IRenderResourceBlob> renderResourceBlob; // 60
    uint8_t unk70[0x78 - 0x70]; // 70
    rend::RenderTextureResource renderTextureResource; // 78
    uint8_t unk88[0x98 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(CCubeTexture, 0x98);
} // namespace RED4ext
