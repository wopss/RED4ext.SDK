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
struct TankPlayerAEAMSController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeTankPlayerAEAMSController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x88 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(TankPlayerAEAMSController, 0x88);
} // namespace game::ui::arcade
using gameuiarcadeTankPlayerAEAMSController = game::ui::arcade::TankPlayerAEAMSController;
} // namespace RED4ext

// clang-format on
