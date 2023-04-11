#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/inkCharacterEvent.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(ink::CharacterEvent, 0x98);
using inkCharacterEvent = ink::CharacterEvent;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InputEvent.hpp>

namespace RED4ext
{
namespace ink
{
struct CharacterEvent : ink::InputEvent
{
    static constexpr const char* NAME = "inkCharacterEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x98 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(CharacterEvent, 0x98);
} // namespace ink
using inkCharacterEvent = ink::CharacterEvent;
} // namespace RED4ext
*/

// clang-format on
