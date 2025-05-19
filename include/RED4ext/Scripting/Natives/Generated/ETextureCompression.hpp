#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
enum class ETextureCompression : int32_t
{
    TCM_None = 0,
    TCM_DXTNoAlpha = 1,
    TCM_DXTAlpha = 2,
    TCM_RGBE = 3,
    TCM_Normalmap = 4,
    TCM_Normals_DEPRECATED = 5,
    TCM_NormalsHigh_DEPRECATED = 6,
    TCM_NormalsGloss_DEPRECATED = 7,
    TCM_TileMap = 8,
    TCM_DXTAlphaLinear = 9,
    TCM_QualityR = 10,
    TCM_QualityRG = 11,
    TCM_QualityColor = 12,
    TCM_HalfHDR_Unsigned = 13,
    TCM_HalfHDR_Signed = 14,
    TCM_Max = 15,
    TCM_HalfHDR = TCM_HalfHDR_Unsigned,
    TCM_Normals = TCM_Normals_DEPRECATED,
    TCM_NormalsGloss = TCM_NormalsGloss_DEPRECATED,
    TCM_NormalsHigh = TCM_NormalsHigh_DEPRECATED,
};
} // namespace RED4ext

// clang-format on
