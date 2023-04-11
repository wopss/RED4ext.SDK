#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineStateMachineIdentifier
{
    static constexpr const char* NAME = "gamestateMachineStateMachineIdentifier";
    static constexpr const char* ALIAS = "StateMachineIdentifier";

    CName definitionName; // 00
    CName referenceName; // 08
};
RED4EXT_ASSERT_SIZE(MachineStateMachineIdentifier, 0x10);
} // namespace game::state
using gamestateMachineStateMachineIdentifier = game::state::MachineStateMachineIdentifier;
using StateMachineIdentifier = game::state::MachineStateMachineIdentifier;
} // namespace RED4ext

// clang-format on
