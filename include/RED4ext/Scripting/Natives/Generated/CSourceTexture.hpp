#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETextureRawFormat.hpp>

namespace RED4ext
{
struct CSourceTexture : ISerializable
{
    static constexpr const char* NAME = "CSourceTexture";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x98 - 0x30]; // 30
    uint32_t width; // 98
    uint32_t height; // 9C
    uint32_t depth; // A0
    uint32_t pitch; // A4
    ETextureRawFormat format; // A8
    uint8_t unkAC[0xB0 - 0xAC]; // AC
};
RED4EXT_ASSERT_SIZE(CSourceTexture, 0xB0);
} // namespace RED4ext

// clang-format on
