#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace physics {
struct DestructionType
{
    uint16_t DT_PhysicalNode : 1; // 0
    uint16_t DT_PhysicalComponent : 1; // 1
    uint16_t DT_BakedNode : 1; // 2
    uint16_t DT_BakedComponent : 1; // 3
    uint16_t DT_IDN : 1; // 4
    uint16_t DT_FoliageDestruction : 1; // 5
    uint16_t DT_QuestComponent : 1; // 6
    uint16_t DT_QuestNode : 1; // 7
    uint16_t b8 : 1; // 8
    uint16_t b9 : 1; // 9
    uint16_t b10 : 1; // 10
    uint16_t b11 : 1; // 11
    uint16_t b12 : 1; // 12
    uint16_t b13 : 1; // 13
    uint16_t b14 : 1; // 14
    uint16_t b15 : 1; // 15
};
RED4EXT_ASSERT_SIZE(DestructionType, 0x2);
} // namespace physics
} // namespace RED4ext

// clang-format on
