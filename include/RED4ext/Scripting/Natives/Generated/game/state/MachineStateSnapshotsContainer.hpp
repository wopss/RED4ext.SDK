#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineStateSnapshot.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineStateSnapshotsContainer
{
    static constexpr const char* NAME = "gamestateMachineStateSnapshotsContainer";
    static constexpr const char* ALIAS = "StateSnapshotsContainer";

    uint8_t unk00[0x8 - 0x0]; // 0
    DynArray<game::state::MachineStateSnapshot> snapshot; // 08
};
RED4EXT_ASSERT_SIZE(MachineStateSnapshotsContainer, 0x18);
} // namespace game::state
using gamestateMachineStateSnapshotsContainer = game::state::MachineStateSnapshotsContainer;
using StateSnapshotsContainer = game::state::MachineStateSnapshotsContainer;
} // namespace RED4ext

// clang-format on
