#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
struct EMeshChunkFlags
{
    uint16_t MCF_RenderInScene : 1; // 0
    uint16_t MCF_RenderInShadows : 1; // 1
    uint16_t MCF_IsTwoSided : 1; // 2
    uint16_t MCF_IsRayTracedEmissive : 1; // 3
    uint16_t b4 : 1; // 4
    uint16_t b5 : 1; // 5
    uint16_t MCF_IsPrefabProxy : 1; // 6
    uint16_t b7 : 1; // 7
    uint16_t b8 : 1; // 8
    uint16_t MCF_ConsoleLOD0 : 1; // 9
    uint16_t MCF_SkipDynamicDecalGeneration : 1; // 10
    uint16_t b11 : 1; // 11
    uint16_t b12 : 1; // 12
    uint16_t b13 : 1; // 13
    uint16_t b14 : 1; // 14
    uint16_t b15 : 1; // 15
};
RED4EXT_ASSERT_SIZE(EMeshChunkFlags, 0x2);
} // namespace RED4ext

// clang-format on
