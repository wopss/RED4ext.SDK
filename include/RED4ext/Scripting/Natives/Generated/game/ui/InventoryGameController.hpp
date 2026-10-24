#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct InventoryGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiInventoryGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x110 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(InventoryGameController, 0x110);
} // namespace game::ui
using gameuiInventoryGameController = game::ui::InventoryGameController;
} // namespace RED4ext

// clang-format on
