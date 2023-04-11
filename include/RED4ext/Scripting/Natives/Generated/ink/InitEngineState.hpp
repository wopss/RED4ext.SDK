#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IStateMachineState.hpp>

namespace RED4ext
{
namespace ink
{
struct InitEngineState : ink::IStateMachineState
{
    static constexpr const char* NAME = "inkInitEngineState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk10[0x28 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(InitEngineState, 0x28);
} // namespace ink
using inkInitEngineState = ink::InitEngineState;
} // namespace RED4ext

// clang-format on
