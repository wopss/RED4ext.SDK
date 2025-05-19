#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace GpuWrapApi {
enum class eTextureGroup : int8_t
{
    TEXG_Generic_Color = 1,
    TEXG_Generic_Grayscale = 2,
    TEXG_Generic_Normal = 3,
    TEXG_Generic_Data = 4,
    TEXG_Generic_UI = 5,
    TEXG_Generic_Font = 6,
    TEXG_Generic_LUT = 7,
    TEXG_Generic_MorphBlend = 8,
    TEXG_Multilayer_Color = 9,
    TEXG_Multilayer_Normal = 10,
    TEXG_Multilayer_Grayscale = 11,
    TEXG_Multilayer_Microblend = 12,
};
} // namespace GpuWrapApi
using GpuWrapApieTextureGroup = GpuWrapApi::eTextureGroup;
} // namespace RED4ext

// clang-format on
