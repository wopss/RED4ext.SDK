#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct DriverCombatHUDGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiDriverCombatHUDGameController";
    static constexpr const char* ALIAS = "DriverCombatHUDGameController";

    ink::WidgetReference crosshairBrackets; // F8
    ink::WidgetReference crosshairBracketsTrail; // 110
    ink::WidgetReference crosshairBracketsFlairLeft; // 128
    ink::WidgetReference crosshairBracketsFlairRight; // 140
    DynArray<ink::WidgetReference> bracketsTransitionDetailsWidgetList; // 158
    uint8_t unk168[0x250 - 0x168]; // 168
    Vector2 crosshairBracketsMinSize; // 250
    uint8_t unk258[0x264 - 0x258]; // 258
    float crosshairBracketsInstantSnapValue; // 264
    float crosshairBracketsInOutTransitionTime; // 268
    float crosshairBracketsIntroSizeMultiplier; // 26C
    float crosshairBracketsTrailTransitionTime; // 270
    uint8_t unk274[0x278 - 0x274]; // 274
    float crosshairReducedOpacity; // 278
    float unifomSafeZone; // 27C
    bool inWeaponizedVehicle; // 280
    bool inDriverCombat; // 281
    bool inReloadState; // 282
    bool inSafeState; // 283
    uint8_t unk284[0x288 - 0x284]; // 284
};
RED4EXT_ASSERT_SIZE(DriverCombatHUDGameController, 0x288);
} // namespace game::ui
using gameuiDriverCombatHUDGameController = game::ui::DriverCombatHUDGameController;
using DriverCombatHUDGameController = game::ui::DriverCombatHUDGameController;
} // namespace RED4ext

// clang-format on
