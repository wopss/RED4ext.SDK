#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeBackgroundController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct RoachRaceBackgroundController : game::ui::arcade::ArcadeBackgroundController
{
    static constexpr const char* NAME = "gameuiarcadeRoachRaceBackgroundController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk88[0x98 - 0x88]; // 88
    DynArray<float> parallaxPlaneRelativeVelocityList; // 98
    uint8_t unkA8[0xC8 - 0xA8]; // A8
    ink::WidgetReference daynightWidget; // C8
    ink::WidgetReference backgroundObjectSpawner; // E0
    ink::WidgetReference cloudSpawner; // F8
    uint8_t unk110[0x130 - 0x110]; // 110
};
RED4EXT_ASSERT_SIZE(RoachRaceBackgroundController, 0x130);
} // namespace game::ui::arcade
using gameuiarcadeRoachRaceBackgroundController = game::ui::arcade::RoachRaceBackgroundController;
} // namespace RED4ext

// clang-format on
