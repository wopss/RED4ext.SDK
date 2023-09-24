#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct TankPlayerHealthController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeTankPlayerHealthController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x88 - 0x78]; // 78
    ink::WidgetReference health; // 88
};
RED4EXT_ASSERT_SIZE(TankPlayerHealthController, 0xA0);
} // namespace game::ui::arcade
using gameuiarcadeTankPlayerHealthController = game::ui::arcade::TankPlayerHealthController;
} // namespace RED4ext

// clang-format on
