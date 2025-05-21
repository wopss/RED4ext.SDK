#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class SaveStatus : int8_t
{
    Invalid = 0,
    Local = 1,
    Upload = 2,
    Cloud = 3,
    InSync = 4,
};
} // namespace ink
using inkSaveStatus = ink::SaveStatus;
} // namespace RED4ext

// clang-format on
