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
struct InitializeUserScreenState : ink::IStateMachineState
{
    static constexpr const char* NAME = "inkInitializeUserScreenState";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InitializeUserScreenState, 0x10);
} // namespace ink
using inkInitializeUserScreenState = ink::InitializeUserScreenState;
} // namespace RED4ext

// clang-format on
