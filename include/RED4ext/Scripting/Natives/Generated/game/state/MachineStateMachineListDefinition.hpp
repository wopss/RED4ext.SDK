#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::state { struct MachineStateMachineDefinition; }

namespace game::state
{
struct MachineStateMachineListDefinition : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineStateMachineListDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::state::MachineStateMachineDefinition>> stateMachinesStorage; // 40
};
RED4EXT_ASSERT_SIZE(MachineStateMachineListDefinition, 0x50);
} // namespace game::state
using gamestateMachineStateMachineListDefinition = game::state::MachineStateMachineListDefinition;
} // namespace RED4ext

// clang-format on
