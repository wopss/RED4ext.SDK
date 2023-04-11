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
struct EndGameLoadingState : ink::IStateMachineState
{
    static constexpr const char* NAME = "inkEndGameLoadingState";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EndGameLoadingState, 0x10);
} // namespace ink
using inkEndGameLoadingState = ink::EndGameLoadingState;
} // namespace RED4ext

// clang-format on
