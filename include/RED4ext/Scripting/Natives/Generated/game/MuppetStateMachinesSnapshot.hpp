#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetStateMachineSnapshot.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetStateMachinesSnapshot
{
    static constexpr const char* NAME = "gameMuppetStateMachinesSnapshot";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::MuppetStateMachineSnapshot> stateMachines; // 00
};
RED4EXT_ASSERT_SIZE(MuppetStateMachinesSnapshot, 0x10);
} // namespace game
using gameMuppetStateMachinesSnapshot = game::MuppetStateMachinesSnapshot;
} // namespace RED4ext

// clang-format on
