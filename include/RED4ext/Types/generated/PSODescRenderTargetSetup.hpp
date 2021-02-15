#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/GpuWrapApieTextureFormat.hpp>

namespace RED4ext
{
struct PSODescRenderTargetSetup
{
    static constexpr const char* NAME = "PSODescRenderTargetSetup";
    static constexpr const char* ALIAS = NAME;

    StaticArray<GpuWrapApieTextureFormat, 8> rtFormats; // 00
    GpuWrapApieTextureFormat dsFormat; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
};
RED4EXT_ASSERT_SIZE(PSODescRenderTargetSetup, 0x10);
} // namespace RED4ext
