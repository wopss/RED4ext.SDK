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
struct MenuState_PlayRecordedSession : gsm::MenuState
{
    static constexpr const char* NAME = "gsmMenuState_PlayRecordedSession";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD8[0xE0 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(MenuState_PlayRecordedSession, 0xE0);
} // namespace gsm
using gsmMenuState_PlayRecordedSession = gsm::MenuState_PlayRecordedSession;
} // namespace RED4ext

// clang-format on
