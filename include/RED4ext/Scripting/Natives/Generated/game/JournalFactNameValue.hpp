#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game
{
struct JournalFactNameValue
{
    static constexpr const char* NAME = "gameJournalFactNameValue";
    static constexpr const char* ALIAS = "JournalFactNameValue";

    CName factName; // 00
    int32_t factValue; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(JournalFactNameValue, 0x10);
} // namespace game
using gameJournalFactNameValue = game::JournalFactNameValue;
using JournalFactNameValue = game::JournalFactNameValue;
} // namespace RED4ext

// clang-format on
