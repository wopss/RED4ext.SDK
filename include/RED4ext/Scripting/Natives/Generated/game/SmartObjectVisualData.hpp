#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) SmartObjectVisualData
{
    static constexpr const char* NAME = "gameSmartObjectVisualData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x80 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SmartObjectVisualData, 0x80);
} // namespace game
using gameSmartObjectVisualData = game::SmartObjectVisualData;
} // namespace RED4ext

// clang-format on
