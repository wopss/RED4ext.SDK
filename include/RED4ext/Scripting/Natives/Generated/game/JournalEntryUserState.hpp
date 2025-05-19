#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class JournalEntryUserState : int8_t
{
    Undefined = 0,
    Inactive = 1,
    Active = 2,
    Succeeded = 3,
    Failed = 4,
    Read = 5,
    Open = 6,
};
} // namespace game
using gameJournalEntryUserState = game::JournalEntryUserState;
} // namespace RED4ext

// clang-format on
