#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetInventoryGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameMuppetInventoryGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkF8[0x158 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(MuppetInventoryGameController, 0x158);
} // namespace game
using gameMuppetInventoryGameController = game::MuppetInventoryGameController;
} // namespace RED4ext

// clang-format on
