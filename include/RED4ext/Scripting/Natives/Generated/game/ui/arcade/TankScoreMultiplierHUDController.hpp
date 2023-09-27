#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct TankScoreMultiplierHUDController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeTankScoreMultiplierHUDController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x88 - 0x78]; // 78
    ink::ImageWidgetReference scoreMultiplierBarFill; // 88
};
RED4EXT_ASSERT_SIZE(TankScoreMultiplierHUDController, 0xA0);
} // namespace game::ui::arcade
using gameuiarcadeTankScoreMultiplierHUDController = game::ui::arcade::TankScoreMultiplierHUDController;
} // namespace RED4ext

// clang-format on
