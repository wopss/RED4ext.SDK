#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InputEvent.hpp>

namespace RED4ext
{
namespace ink { 
struct CharacterEvent : ink::InputEvent
{
    static constexpr const char* NAME = "inkCharacterEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x98 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(CharacterEvent, 0x98);
} // namespace ink
} // namespace RED4ext
