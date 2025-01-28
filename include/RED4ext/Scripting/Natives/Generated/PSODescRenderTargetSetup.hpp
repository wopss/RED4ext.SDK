#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApi/eTextureFormat.hpp>

namespace RED4ext
{
struct PSODescRenderTargetSetup
{
    static constexpr const char* NAME = "PSODescRenderTargetSetup";
    static constexpr const char* ALIAS = NAME;

    StaticArray<GpuWrapApi::eTextureFormat, 8> rtFormats; // 00
    GpuWrapApi::eTextureFormat dsFormat; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
};
RED4EXT_ASSERT_SIZE(PSODescRenderTargetSetup, 0x10);
} // namespace RED4ext

// clang-format on
