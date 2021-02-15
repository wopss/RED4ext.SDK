#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ETextureCompression.hpp>
#include <RED4ext/Types/generated/ETextureRawFormat.hpp>
#include <RED4ext/Types/generated/GpuWrapApieTextureGroup.hpp>

namespace RED4ext
{
struct STextureGroupSetup
{
    static constexpr const char* NAME = "STextureGroupSetup";
    static constexpr const char* ALIAS = NAME;

    GpuWrapApieTextureGroup group; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    ETextureCompression compression; // 04
    ETextureRawFormat rawFormat; // 08
    uint8_t platformMipBiasPC; // 0C
    uint8_t platformMipBiasConsole; // 0D
    bool isStreamable; // 0E
    bool hasMipchain; // 0F
    bool isGamma; // 10
    bool allowTextureDowngrade; // 11
    uint8_t unk12[0x14 - 0x12]; // 12
};
RED4EXT_ASSERT_SIZE(STextureGroupSetup, 0x14);
} // namespace RED4ext
