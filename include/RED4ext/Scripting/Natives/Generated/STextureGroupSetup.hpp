#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EAstcQuality.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETextureCompression.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETextureRawFormat.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApi/eTextureGroup.hpp>

namespace RED4ext
{
struct STextureGroupSetup
{
    static constexpr const char* NAME = "STextureGroupSetup";
    static constexpr const char* ALIAS = NAME;

    ETextureCompression compression; // 00
    ETextureRawFormat rawFormat; // 04
    EAstcQuality astcQuality; // 08
    GpuWrapApi::eTextureGroup group; // 09
    uint8_t platformMipBiasPC; // 0A
    uint8_t platformMipBiasConsole; // 0B
    bool isStreamable; // 0C
    bool hasMipchain; // 0D
    bool isGamma; // 0E
    bool allowTextureDowngrade; // 0F
};
RED4EXT_ASSERT_SIZE(STextureGroupSetup, 0x10);
} // namespace RED4ext

// clang-format on
