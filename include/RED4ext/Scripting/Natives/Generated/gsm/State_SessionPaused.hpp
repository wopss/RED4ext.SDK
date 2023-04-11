#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/State_SessionStreamingAware.hpp>

namespace RED4ext
{
namespace gsm
{
struct State_SessionPaused : gsm::State_SessionStreamingAware
{
    static constexpr const char* NAME = "gsmState_SessionPaused";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkC0[0xD8 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(State_SessionPaused, 0xD8);
} // namespace gsm
using gsmState_SessionPaused = gsm::State_SessionPaused;
} // namespace RED4ext

// clang-format on
