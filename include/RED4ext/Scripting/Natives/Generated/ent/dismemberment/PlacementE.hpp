#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ent::dismemberment {
struct PlacementE
{
    uint16_t b0 : 1; // 0
    uint16_t b1 : 1; // 1
    uint16_t b2 : 1; // 2
    uint16_t b3 : 1; // 3
    uint16_t MAIN_MESH : 1; // 4
    uint16_t DISM_MESH : 1; // 5
    uint16_t b6 : 1; // 6
    uint16_t b7 : 1; // 7
    uint16_t RAGDOLL_CONTACT : 1; // 8
    uint16_t RAGDOLL_CONTACT_SLIDE : 1; // 9
    uint16_t RAGDOLL_SLEEP : 1; // 10
    uint16_t b11 : 1; // 11
    uint16_t b12 : 1; // 12
    uint16_t b13 : 1; // 13
    uint16_t b14 : 1; // 14
    uint16_t b15 : 1; // 15
};
RED4EXT_ASSERT_SIZE(PlacementE, 0x2);
} // namespace ent::dismemberment
} // namespace RED4ext

// clang-format on
