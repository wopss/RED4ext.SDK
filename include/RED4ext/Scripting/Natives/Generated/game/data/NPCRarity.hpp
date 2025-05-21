#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class NPCRarity : int32_t
{
    Boss = 0,
    Elite = 1,
    MaxTac = 2,
    Normal = 3,
    Officer = 4,
    Rare = 5,
    Trash = 6,
    Weak = 7,
    Count = 8,
    Invalid = 9,
};
} // namespace game::data
using gamedataNPCRarity = game::data::NPCRarity;
} // namespace RED4ext

// clang-format on
