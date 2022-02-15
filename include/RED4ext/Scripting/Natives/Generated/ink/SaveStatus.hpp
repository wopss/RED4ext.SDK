#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink { 
enum class SaveStatus : uint8_t
{
    Invalid = 0,
    Local = 1,
    Cloud = 2,
    InSync = 3,
    Conflict = 4,
};
} // namespace ink
} // namespace RED4ext
