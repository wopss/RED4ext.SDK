#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct JournalRequestStateFilter
{
    static constexpr const char* NAME = "gameJournalRequestStateFilter";
    static constexpr const char* ALIAS = NAME;

    bool inactive; // 00
    bool active; // 01
    bool succeeded; // 02
    bool failed; // 03
};
RED4EXT_ASSERT_SIZE(JournalRequestStateFilter, 0x4);
} // namespace game
} // namespace RED4ext
