#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class AIDirectorEntryStartType : int32_t
{
    Default = 0,
    DespawnAllEnemies = 1,
    DespawnExcessedEnemies = 2,
    WaitUntilNoEnemies = 3,
    WaitUntilSameOrLessAmountOfEnemies = 4,
    Count = 5,
    Invalid = 6,
};
} // namespace game::data
using gamedataAIDirectorEntryStartType = game::data::AIDirectorEntryStartType;
} // namespace RED4ext

// clang-format on
