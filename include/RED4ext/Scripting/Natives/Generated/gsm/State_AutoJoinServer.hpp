#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/MenuState.hpp>

namespace RED4ext
{
namespace gsm { 
struct State_AutoJoinServer : gsm::MenuState
{
    static constexpr const char* NAME = "gsmState_AutoJoinServer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD8[0x140 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(State_AutoJoinServer, 0x140);
} // namespace gsm
} // namespace RED4ext
