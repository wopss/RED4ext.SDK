#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetAbilities.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetControllersSnapshot.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetHealthState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetHighLevelState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetInventoryState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetLookState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetMoveState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetPhysicalState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetScanningState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetStateMachinesSnapshot.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetUpperBodyState.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) MuppetState
{
    static constexpr const char* NAME = "gameMuppetState";
    static constexpr const char* ALIAS = NAME;

    uint32_t frameId; // 00
    game::MuppetHighLevelState highLevelState; // 04
    game::MuppetHealthState healthState; // 0C
    game::MuppetPhysicalState physicalMoveState; // 10
    game::MuppetLookState lookState; // 60
    game::MuppetMoveState moveState; // 6C
    game::MuppetUpperBodyState upperBodyState; // 80
    game::MuppetScanningState scanningState; // 124
    uint8_t unk125[0x128 - 0x125]; // 125
    game::MuppetInventoryState inventoryState; // 128
    game::MuppetAbilities abilities; // 140
    game::MuppetStateMachinesSnapshot stateMachinesSnapshot; // 280
    game::MuppetControllersSnapshot controllersSnapshot; // 290
    uint32_t snapFrameId; // 2A0
    uint8_t unk2A4[0x2B0 - 0x2A4]; // 2A4
};
RED4EXT_ASSERT_SIZE(MuppetState, 0x2B0);
} // namespace game
using gameMuppetState = game::MuppetState;
} // namespace RED4ext

// clang-format on
