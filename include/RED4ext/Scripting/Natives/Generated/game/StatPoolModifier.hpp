#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct StatPoolModifier
{
    static constexpr const char* NAME = "gameStatPoolModifier";
    static constexpr const char* ALIAS = "StatPoolModifier";

    uint8_t unk00[0x68 - 0x0]; // 0
    float rangeBegin; // 68
    float rangeEnd; // 6C
    float startDelay; // 70
    float valuePerSec; // 74
    bool enabled; // 78
    bool delayOnChange; // 79
    bool usingPointValues; // 7A
    uint8_t unk7B[0x80 - 0x7B]; // 7B
};
RED4EXT_ASSERT_SIZE(StatPoolModifier, 0x80);
} // namespace game
using gameStatPoolModifier = game::StatPoolModifier;
using StatPoolModifier = game::StatPoolModifier;
} // namespace RED4ext

// clang-format on
