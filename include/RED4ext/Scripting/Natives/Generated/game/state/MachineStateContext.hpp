#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineStateContextParameters.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineStateSnapshotsContainer.hpp>

namespace RED4ext
{
namespace game::state
{
struct __declspec(align(0x10)) MachineStateContext
{
    static constexpr const char* NAME = "gamestateMachineStateContext";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xA850 - 0x0]; // 0
    game::state::MachineStateContextParameters permanentParameters; // A850
    uint8_t unk128A0[0x1A8F0 - 0x128A0]; // 128A0
    game::state::MachineStateSnapshotsContainer snapshot; // 1A8F0
    uint8_t unk1A908[0x1A910 - 0x1A908]; // 1A908
};
RED4EXT_ASSERT_SIZE(MachineStateContext, 0x1A910);
} // namespace game::state
using gamestateMachineStateContext = game::state::MachineStateContext;
} // namespace RED4ext

// clang-format on
