#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class SelectionRule : int8_t
{
    Single = 0,
    Parent = 1,
    Children = 2,
    TypeBased = 3,
    NameBased = 4,
};
} // namespace ink
using inkSelectionRule = ink::SelectionRule;
} // namespace RED4ext

// clang-format on
