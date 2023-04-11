#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/MenuState.hpp>

namespace RED4ext
{
namespace gsm
{
struct MenuState_LoadSession : gsm::MenuState
{
    static constexpr const char* NAME = "gsmMenuState_LoadSession";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD8[0xF8 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(MenuState_LoadSession, 0xF8);
} // namespace gsm
using gsmMenuState_LoadSession = gsm::MenuState_LoadSession;
} // namespace RED4ext

// clang-format on
