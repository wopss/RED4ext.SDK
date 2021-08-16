#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/gsm/State_Session.hpp>

namespace RED4ext
{
namespace gsm { 
struct State_PreGameSession : gsm::State_Session
{
    static constexpr const char* NAME = "gsmState_PreGameSession";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(State_PreGameSession, 0x300);
} // namespace gsm
} // namespace RED4ext
