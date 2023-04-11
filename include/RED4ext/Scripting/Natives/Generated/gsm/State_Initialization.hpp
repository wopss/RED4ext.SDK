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
struct State_Initialization : gsm::State
{
    static constexpr const char* NAME = "gsmState_Initialization";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB8[0xE8 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(State_Initialization, 0xE8);
} // namespace gsm
using gsmState_Initialization = gsm::State_Initialization;
} // namespace RED4ext

// clang-format on
