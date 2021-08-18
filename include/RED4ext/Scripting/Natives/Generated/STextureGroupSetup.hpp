#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETextureCompression.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETextureRawFormat.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApieTextureGroup.hpp>

namespace RED4ext
{
struct STextureGroupSetup
{
    static constexpr const char* NAME = "STextureGroupSetup";
    static constexpr const char* ALIAS = NAME;

    ETextureCompression compression; // 00
    ETextureRawFormat rawFormat; // 04
    GpuWrapApieTextureGroup group; // 08
    uint8_t platformMipBiasPC; // 09
    uint8_t platformMipBiasConsole; // 0A
    bool isStreamable; // 0B
    bool hasMipchain; // 0C
    bool isGamma; // 0D
    bool allowTextureDowngrade; // 0E
    uint8_t unk0F[0x10 - 0xF]; // F
};
RED4EXT_ASSERT_SIZE(STextureGroupSetup, 0x10);
} // namespace RED4ext
