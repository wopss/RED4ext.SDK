#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
struct TriggerChannel
{
    uint32_t TC_Default : 1; // 0
    uint32_t TC_Player : 1; // 1
    uint32_t TC_Camera : 1; // 2
    uint32_t TC_Human : 1; // 3
    uint32_t TC_SoundReverbArea : 1; // 4
    uint32_t TC_SoundAmbientArea : 1; // 5
    uint32_t TC_Quest : 1; // 6
    uint32_t TC_Projectiles : 1; // 7
    uint32_t TC_Vehicle : 1; // 8
    uint32_t TC_Environment : 1; // 9
    uint32_t TC_WaterNullArea : 1; // 10
    uint32_t b11 : 1; // 11
    uint32_t b12 : 1; // 12
    uint32_t b13 : 1; // 13
    uint32_t b14 : 1; // 14
    uint32_t b15 : 1; // 15
    uint32_t TC_Custom0 : 1; // 16
    uint32_t TC_Custom1 : 1; // 17
    uint32_t TC_Custom2 : 1; // 18
    uint32_t TC_Custom3 : 1; // 19
    uint32_t TC_Custom4 : 1; // 20
    uint32_t TC_Custom5 : 1; // 21
    uint32_t TC_Custom6 : 1; // 22
    uint32_t TC_Custom7 : 1; // 23
    uint32_t TC_Custom8 : 1; // 24
    uint32_t TC_Custom9 : 1; // 25
    uint32_t TC_Custom10 : 1; // 26
    uint32_t TC_Custom11 : 1; // 27
    uint32_t TC_Custom12 : 1; // 28
    uint32_t TC_Custom13 : 1; // 29
    uint32_t TC_Custom14 : 1; // 30
    uint32_t b31 : 1; // 31
};
RED4EXT_ASSERT_SIZE(TriggerChannel, 0x4);
} // namespace RED4ext

// clang-format on
