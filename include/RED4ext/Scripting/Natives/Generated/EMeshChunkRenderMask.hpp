#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
struct EMeshChunkRenderMask
{
    uint16_t MCR_Scene : 1; // 0
    uint16_t MCR_Cascade1 : 1; // 1
    uint16_t MCR_Cascade2 : 1; // 2
    uint16_t MCR_Cascade3 : 1; // 3
    uint16_t MCR_Cascade4 : 1; // 4
    uint16_t MCR_LocalShadows : 1; // 5
    uint16_t MCR_IsTwoSided : 1; // 6
    uint16_t MCR_DistantShadows : 1; // 7
    uint16_t MCR_IsRayTracedEmissive : 1; // 8
    uint16_t b9 : 1; // 9
    uint16_t b10 : 1; // 10
    uint16_t MCR_PrefabProxy : 1; // 11
    uint16_t MCR_Cascades : 1; // 12
    uint16_t b13 : 1; // 13
    uint16_t b14 : 1; // 14
    uint16_t b15 : 1; // 15
};
RED4EXT_ASSERT_SIZE(EMeshChunkRenderMask, 0x2);
} // namespace RED4ext

// clang-format on
