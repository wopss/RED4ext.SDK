#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct IArcadeScreenController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeIArcadeScreenController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x98 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(IArcadeScreenController, 0x98);
} // namespace game::ui::arcade
using gameuiarcadeIArcadeScreenController = game::ui::arcade::IArcadeScreenController;
} // namespace RED4ext

// clang-format on
