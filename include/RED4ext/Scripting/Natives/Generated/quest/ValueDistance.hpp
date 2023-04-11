#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IDistance.hpp>

namespace RED4ext
{
namespace quest
{
struct ValueDistance : quest::IDistance
{
    static constexpr const char* NAME = "questValueDistance";
    static constexpr const char* ALIAS = NAME;

    float distanceValue; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(ValueDistance, 0x38);
} // namespace quest
using questValueDistance = quest::ValueDistance;
} // namespace RED4ext

// clang-format on
