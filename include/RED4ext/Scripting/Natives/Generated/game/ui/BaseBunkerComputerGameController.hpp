#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct BaseBunkerComputerGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiBaseBunkerComputerGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0x100 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(BaseBunkerComputerGameController, 0x100);
} // namespace game::ui
using gameuiBaseBunkerComputerGameController = game::ui::BaseBunkerComputerGameController;
} // namespace RED4ext

// clang-format on
