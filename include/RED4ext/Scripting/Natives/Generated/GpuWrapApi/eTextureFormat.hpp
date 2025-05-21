#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace GpuWrapApi {
enum class eTextureFormat : int8_t
{
    TEXFMT_A8_Unorm = 0,
    TEXFMT_R8_Unorm = 1,
    TEXFMT_L8_Unorm = 2,
    TEXFMT_R8G8_Unorm = 3,
    TEXFMT_R8G8B8X8_Unorm = 4,
    TEXFMT_R8G8B8A8_Unorm = 5,
    TEXFMT_R8G8B8A8_Snorm = 6,
    TEXFMT_R16_Unorm = 7,
    TEXFMT_R16_Uint = 8,
    TEXFMT_R32_Uint = 9,
    TEXFMT_R32G32B32A32_Uint = 10,
    TEXFMT_R32G32_Uint = 11,
    TEXFMT_R16G16B16A16_Unorm = 12,
    TEXFMT_R16G16B16A16_Uint = 14,
    TEXFMT_R16G16_Uint = 15,
    TEXFMT_R10G10B10A2_Unorm = 16,
    TEXFMT_R16G16B16A16_Float = 17,
    TEXFMT_R11G11B10_Float = 18,
    TEXFMT_R16G16_Float = 19,
    TEXFMT_R32G32_Float = 20,
    TEXFMT_R32G32B32A32_Float = 21,
    TEXFMT_R32_Float = 22,
    TEXFMT_R16_Float = 23,
    TEXFMT_D24S8 = 24,
    TEXFMT_D32FS8 = 25,
    TEXFMT_D32F = 27,
    TEXFMT_D16U = 28,
    TEXFMT_BC1 = 29,
    TEXFMT_BC2 = 30,
    TEXFMT_BC3 = 31,
    TEXFMT_BC4 = 32,
    TEXFMT_BC5 = 33,
    TEXFMT_BC6H_UNSIGNED = 34,
    TEXFMT_BC6H_SIGNED = 35,
    TEXFMT_BC7 = 36,
    TEXFMT_BC7_SRGB = 37,
    TEXFMT_R8_Uint = 38,
    TEXFMT_R8G8B8A8_Unorm_SRGB = 40,
    TEXFMT_BC1_SRGB = 41,
    TEXFMT_BC2_SRGB = 42,
    TEXFMT_BC3_SRGB = 43,
    TEXFMT_R16G16_Unorm = 44,
    TEXFMT_R16G16_Sint = 45,
    TEXFMT_R16G16_Snorm = 46,
    TEXFMT_B5G6R5_Unorm = 47,
    TEXFMT_R16_Snorm = 49,
    TEXFMT_B8G8R8A8 = 50,
    TEXFMT_B8G8R8A8_SRGB = 51,
    TEXFMT_A8 = TEXFMT_A8_Unorm,
    TEXFMT_BC6H = TEXFMT_BC6H_UNSIGNED,
    TEXFMT_Float_R11G11B10 = TEXFMT_R11G11B10_Float,
    TEXFMT_Float_R16 = TEXFMT_R16_Float,
    TEXFMT_Float_R16G16 = TEXFMT_R16G16_Float,
    TEXFMT_Float_R16G16B16A16 = TEXFMT_R16G16B16A16_Float,
    TEXFMT_Float_R32 = TEXFMT_R32_Float,
    TEXFMT_Float_R32G32 = TEXFMT_R32G32_Float,
    TEXFMT_Float_R32G32B32A32 = TEXFMT_R32G32B32A32_Float,
    TEXFMT_L8 = TEXFMT_L8_Unorm,
    TEXFMT_R10G10B10A2 = TEXFMT_R10G10B10A2_Unorm,
    TEXFMT_R8 = TEXFMT_R8_Unorm,
    TEXFMT_R8G8 = TEXFMT_R8G8_Unorm,
    TEXFMT_R8G8B8A8 = TEXFMT_R8G8B8A8_Unorm_SRGB,
    TEXFMT_R8G8B8X8 = TEXFMT_R8G8B8X8_Unorm,
    TEXFMT_Uint_16 = TEXFMT_R16_Uint,
    TEXFMT_Uint_16_norm = TEXFMT_R16_Unorm,
    TEXFMT_Uint_32 = TEXFMT_R32_Uint,
    TEXFMT_Uint_R32G32B32A32 = TEXFMT_R16G16B16A16_Uint,
};
} // namespace GpuWrapApi
using GpuWrapApieTextureFormat = GpuWrapApi::eTextureFormat;
} // namespace RED4ext

// clang-format on
