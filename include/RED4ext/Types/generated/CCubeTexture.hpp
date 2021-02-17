#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/ITexture.hpp>
#include <RED4ext/Types/generated/STextureGroupSetup.hpp>
#include <RED4ext/Types/generated/rend/RenderTextureResource.hpp>

namespace RED4ext
{
struct IRenderResourceBlob;

struct CCubeTexture : ITexture
{
    static constexpr const char* NAME = "CCubeTexture";
    static constexpr const char* ALIAS = NAME;

    uint32_t size; // 40
    STextureGroupSetup setup; // 44
    uint8_t unk58[0x68 - 0x58]; // 58
    Handle<IRenderResourceBlob> renderResourceBlob; // 68
    uint8_t unk78[0x80 - 0x78]; // 78
    rend::RenderTextureResource renderTextureResource; // 80
    uint8_t unk90[0xA0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(CCubeTexture, 0xA0);
} // namespace RED4ext
