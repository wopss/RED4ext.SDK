#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetStateMachineSnapshot
{
    static constexpr const char* NAME = "gameMuppetStateMachineSnapshot";
    static constexpr const char* ALIAS = NAME;

    CName stateMachineId; // 00
    CName stateId; // 08
};
RED4EXT_ASSERT_SIZE(MuppetStateMachineSnapshot, 0x10);
} // namespace game
using gameMuppetStateMachineSnapshot = game::MuppetStateMachineSnapshot;
} // namespace RED4ext

// clang-format on
