#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeBackgroundController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct TankBackgroundController : game::ui::arcade::ArcadeBackgroundController
{
    static constexpr const char* NAME = "gameuiarcadeTankBackgroundController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk88[0xA8 - 0x88]; // 88
    ink::WidgetReference decorationSpawner; // A8
    uint8_t unkC0[0xD8 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(TankBackgroundController, 0xD8);
} // namespace game::ui::arcade
using gameuiarcadeTankBackgroundController = game::ui::arcade::TankBackgroundController;
} // namespace RED4ext

// clang-format on
