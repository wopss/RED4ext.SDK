#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/DynamicTextureDataFormat.hpp>
#include <RED4ext/Scripting/Natives/Generated/ITexture.hpp>

namespace RED4ext
{
struct IDynamicTextureGenerator;

struct DynamicTexture : ITexture
{
    static constexpr const char* NAME = "DynamicTexture";
    static constexpr const char* ALIAS = NAME;

    uint32_t width; // 40
    uint32_t height; // 44
    bool scaleToViewport; // 48
    uint8_t unk49[0x4C - 0x49]; // 49
    float viewportScale; // 4C
    uint8_t unk50[0x58 - 0x50]; // 50
    DynamicTextureDataFormat dataFormat; // 58
    bool mipChain; // 59
    uint8_t samplesCount; // 5A
    uint8_t unk5B[0x88 - 0x5B]; // 5B
    Handle<IDynamicTextureGenerator> generator; // 88
    uint8_t unk98[0xA8 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(DynamicTexture, 0xA8);
} // namespace RED4ext

// clang-format on
