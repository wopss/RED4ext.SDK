#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game { 
struct JournalRequestClassFilter
{
    static constexpr const char* NAME = "gameJournalRequestClassFilter";
    static constexpr const char* ALIAS = NAME;

    CName className; // 00
};
RED4EXT_ASSERT_SIZE(JournalRequestClassFilter, 0x8);
} // namespace game
} // namespace RED4ext
