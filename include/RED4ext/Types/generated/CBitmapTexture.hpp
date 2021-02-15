#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/ITexture.hpp>
#include <RED4ext/Types/generated/STextureGroupSetup.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>
#include <RED4ext/Types/generated/rend/RenderTextureResource.hpp>

namespace RED4ext
{
struct IRenderResourceBlob;

struct CBitmapTexture : ITexture
{
    static constexpr const char* NAME = "CBitmapTexture";
    static constexpr const char* ALIAS = NAME;

    uint32_t width; // 40
    uint32_t height; // 44
    uint32_t depth; // 48
    STextureGroupSetup setup; // 4C
    uint8_t unk60[0x70 - 0x60]; // 60
    Handle<IRenderResourceBlob> renderResourceBlob; // 70
    uint8_t unk80[0x88 - 0x80]; // 80
    rend::RenderTextureResource renderTextureResource; // 88
    uint8_t unk98[0xA4 - 0x98]; // 98
    Vector3 histBiasMulCoef; // A4
    Vector3 histBiasAddCoef; // B0
    uint8_t unkBC[0xC0 - 0xBC]; // BC
};
RED4EXT_ASSERT_SIZE(CBitmapTexture, 0xC0);
} // namespace RED4ext
