#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/State.hpp>

namespace RED4ext
{
namespace gsm
{
struct State_SessionLoading : gsm::State
{
    static constexpr const char* NAME = "gsmState_SessionLoading";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB8[0x190 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(State_SessionLoading, 0x190);
} // namespace gsm
using gsmState_SessionLoading = gsm::State_SessionLoading;
} // namespace RED4ext

// clang-format on
