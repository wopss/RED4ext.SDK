#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class JournalEntryState : int32_t
{
    Undefined = 0,
    Inactive = 1,
    Active = 2,
    Succeeded = 3,
    Failed = 4,
};
} // namespace game
using gameJournalEntryState = game::JournalEntryState;
} // namespace RED4ext

// clang-format on
