#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct TankCounterHUDController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeTankCounterHUDController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x88 - 0x78]; // 78
    ink::TextWidgetReference counterText; // 88
};
RED4EXT_ASSERT_SIZE(TankCounterHUDController, 0xA0);
} // namespace game::ui::arcade
using gameuiarcadeTankCounterHUDController = game::ui::arcade::TankCounterHUDController;
} // namespace RED4ext

// clang-format on
