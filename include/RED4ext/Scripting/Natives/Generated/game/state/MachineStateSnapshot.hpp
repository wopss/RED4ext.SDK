#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineStateMachineInstanceData.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineStateSnapshot
{
    static constexpr const char* NAME = "gamestateMachineStateSnapshot";
    static constexpr const char* ALIAS = "StateSnapshot";

    uint8_t unk00[0x10 - 0x0]; // 0
    CName stateMachineName; // 10
    game::state::MachineStateMachineInstanceData instanceData; // 18
    CName stateName; // 38
    bool running; // 40
    bool transitionJustHappened; // 41
    uint8_t unk42[0x43 - 0x42]; // 42
    bool logicalOwnerIsAWeapon; // 43
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(MachineStateSnapshot, 0x48);
} // namespace game::state
using gamestateMachineStateSnapshot = game::state::MachineStateSnapshot;
using StateSnapshot = game::state::MachineStateSnapshot;
} // namespace RED4ext

// clang-format on
