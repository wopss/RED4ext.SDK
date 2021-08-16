#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game { 
enum class JournalChangeType : uint32_t
{
    Undefined = 0,
    Direct = 1,
    Indirect = 2,
    IndirectDependent = 3,
};
} // namespace game
using JournalChangeType = game::JournalChangeType;
} // namespace RED4ext
