#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/State_SessionStreamingAware.hpp>

namespace RED4ext
{
namespace gsm { 
struct State_SessionActive : gsm::State_SessionStreamingAware
{
    static constexpr const char* NAME = "gsmState_SessionActive";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkC0[0x108 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(State_SessionActive, 0x108);
} // namespace gsm
} // namespace RED4ext
