#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>

namespace RED4ext
{
namespace quest
{
struct ComparisonParam : ISerializable
{
    static constexpr const char* NAME = "questComparisonParam";
    static constexpr const char* ALIAS = NAME;

    bool entireCommunity; // 30
    uint8_t unk31[0x34 - 0x31]; // 31
    uint32_t count; // 34
    EComparisonType comparisonType; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(ComparisonParam, 0x40);
} // namespace quest
using questComparisonParam = quest::ComparisonParam;
} // namespace RED4ext

// clang-format on
