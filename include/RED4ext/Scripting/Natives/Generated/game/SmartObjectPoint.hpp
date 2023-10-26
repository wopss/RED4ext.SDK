#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) SmartObjectPoint
{
    static constexpr const char* NAME = "gameSmartObjectPoint";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x2B - 0x0]; // 0
    bool isReachable; // 2B
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(SmartObjectPoint, 0x30);
} // namespace game
using gameSmartObjectPoint = game::SmartObjectPoint;
} // namespace RED4ext

// clang-format on
