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
struct JournalRequestClassFilter
{
    static constexpr const char* NAME = "gameJournalRequestClassFilter";
    static constexpr const char* ALIAS = "JournalRequestClassFilter";

    CName className; // 00
};
RED4EXT_ASSERT_SIZE(JournalRequestClassFilter, 0x8);
} // namespace game
using gameJournalRequestClassFilter = game::JournalRequestClassFilter;
using JournalRequestClassFilter = game::JournalRequestClassFilter;
} // namespace RED4ext

// clang-format on
