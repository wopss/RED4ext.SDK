#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/gsm/State.hpp>

namespace RED4ext
{
namespace gsm { 
struct State_SessionNewGame : gsm::State
{
    static constexpr const char* NAME = "gsmState_SessionNewGame";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB8[0xC0 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(State_SessionNewGame, 0xC0);
} // namespace gsm
} // namespace RED4ext
