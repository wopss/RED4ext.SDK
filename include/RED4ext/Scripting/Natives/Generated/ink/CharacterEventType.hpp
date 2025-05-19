#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class CharacterEventType : int8_t
{
    CharInput = 0,
    MoveCaretForward = 1,
    MoveCaretBackward = 2,
    Delete = 3,
    Backspace = 4,
};
} // namespace ink
using inkCharacterEventType = ink::CharacterEventType;
} // namespace RED4ext

// clang-format on
