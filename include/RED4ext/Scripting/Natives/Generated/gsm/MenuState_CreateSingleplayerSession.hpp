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
struct MenuState_CreateSingleplayerSession : gsm::MenuState
{
    static constexpr const char* NAME = "gsmMenuState_CreateSingleplayerSession";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD8[0x128 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(MenuState_CreateSingleplayerSession, 0x128);
} // namespace gsm
using gsmMenuState_CreateSingleplayerSession = gsm::MenuState_CreateSingleplayerSession;
} // namespace RED4ext

// clang-format on
