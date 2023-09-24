#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterHUDController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeShooterHUDController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x98 - 0x78]; // 78
    ink::ImageWidgetReference selectedWeaponSlot; // 98
    ink::ImageWidgetReference secondWeaponSlot; // B0
    ink::ImageWidgetReference thirdWeaponSlot; // C8
    ink::WidgetReference healthContainer; // E0
    ink::WidgetReference continueText; // F8
    ink::ImageWidgetReference continueCountdownWidget; // 110
    ink::ImageWidgetReference levelName; // 128
    ink::ImageWidgetReference levelNumber1; // 140
    ink::ImageWidgetReference levelNumber2; // 158
    ink::WidgetReference levelFinishCard; // 170
    uint8_t unk188[0x1E0 - 0x188]; // 188
};
RED4EXT_ASSERT_SIZE(ShooterHUDController, 0x1E0);
} // namespace game::ui::arcade
using gameuiarcadeShooterHUDController = game::ui::arcade::ShooterHUDController;
} // namespace RED4ext

// clang-format on
