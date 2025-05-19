#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class StatsBundleOwnerType : int32_t
{
    None = 0,
    Cleared = 1,
    UniqueItem = 2,
    StackableItem = 3,
    InnerItem = 4,
    Entity = 5,
    Stub = 6,
    Reinitialized = 7,
    Count = 8,
    Invalid = 9,
};
} // namespace game
using gameStatsBundleOwnerType = game::StatsBundleOwnerType;
} // namespace RED4ext

// clang-format on
