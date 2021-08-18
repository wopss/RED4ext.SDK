#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/State.hpp>

namespace RED4ext
{
namespace gsm { 
struct MenuState : gsm::State
{
    static constexpr const char* NAME = "gsmMenuState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB8[0xD8 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(MenuState, 0xD8);
} // namespace gsm
} // namespace RED4ext
