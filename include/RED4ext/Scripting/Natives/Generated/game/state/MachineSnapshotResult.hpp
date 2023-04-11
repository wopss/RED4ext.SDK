#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineStateSnapshot.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineSnapshotResult
{
    static constexpr const char* NAME = "gamestateMachineSnapshotResult";
    static constexpr const char* ALIAS = "SnapshotResult";

    game::state::MachineStateSnapshot snapshot; // 00
    bool valid; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(MachineSnapshotResult, 0x50);
} // namespace game::state
using gamestateMachineSnapshotResult = game::state::MachineSnapshotResult;
using SnapshotResult = game::state::MachineSnapshotResult;
} // namespace RED4ext

// clang-format on
