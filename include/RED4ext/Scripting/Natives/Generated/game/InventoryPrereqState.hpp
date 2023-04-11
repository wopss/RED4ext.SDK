#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game
{
struct InventoryPrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameInventoryPrereqState";
    static constexpr const char* ALIAS = "InventoryPrereqState";

    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(InventoryPrereqState, 0xD0);
} // namespace game
using gameInventoryPrereqState = game::InventoryPrereqState;
using InventoryPrereqState = game::InventoryPrereqState;
} // namespace RED4ext

// clang-format on
