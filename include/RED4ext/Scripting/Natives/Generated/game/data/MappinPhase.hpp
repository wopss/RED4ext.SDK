#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class MappinPhase : int32_t
{
    CompletedPhase = 0,
    DefaultPhase = 1,
    DiscoveredPhase = 2,
    UndiscoveredPhase = 3,
    Count = 4,
    Invalid = 5,
};
} // namespace game::data
using gamedataMappinPhase = game::data::MappinPhase;
} // namespace RED4ext

// clang-format on
