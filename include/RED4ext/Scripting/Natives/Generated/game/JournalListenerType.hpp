#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class JournalListenerType : int32_t
{
    State = 0,
    Visited = 1,
    Tracked = 2,
    Untracked = 3,
    Counter = 4,
    StateDelay = 5,
    ObjectiveOptional = 6,
    ChoiceEntry = 7,
};
} // namespace game
using gameJournalListenerType = game::JournalListenerType;
} // namespace RED4ext

// clang-format on
