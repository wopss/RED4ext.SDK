#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IStateMachine.hpp>

namespace RED4ext
{
namespace ink
{
struct StateMachine : ink::IStateMachine
{
    static constexpr const char* NAME = "inkStateMachine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x168 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(StateMachine, 0x168);
} // namespace ink
using inkStateMachine = ink::StateMachine;
} // namespace RED4ext

// clang-format on
