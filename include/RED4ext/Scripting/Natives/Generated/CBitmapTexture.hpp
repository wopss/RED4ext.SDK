#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ITexture.hpp>
#include <RED4ext/Scripting/Natives/Generated/STextureGroupSetup.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderTextureResource.hpp>

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
    uint8_t unk5C[0x68 - 0x5C]; // 5C
    Handle<IRenderResourceBlob> renderResourceBlob; // 68
    uint8_t unk78[0x80 - 0x78]; // 78
    rend::RenderTextureResource renderTextureResource; // 80
    uint8_t unk90[0x9C - 0x90]; // 90
    Vector3 histBiasMulCoef; // 9C
    Vector3 histBiasAddCoef; // A8
    uint8_t unkB4[0xB8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(CBitmapTexture, 0xB8);
} // namespace RED4ext
