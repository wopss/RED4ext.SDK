#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class SaveType : int8_t
{
    ManualSave = 0,
    QuickSave = 1,
    AutoSave = 2,
    PointOfNoReturn = 3,
    EndGameSave = 4,
};
} // namespace ink
using inkSaveType = ink::SaveType;
} // namespace RED4ext

// clang-format on
