#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/IArcadeScreenController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ArcadeGameplayController : game::ui::arcade::IArcadeScreenController
{
    static constexpr const char* NAME = "gameuiarcadeArcadeGameplayController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk98[0xD0 - 0x98]; // 98
    ink::WidgetReference score; // D0
    ink::WidgetReference pauseText; // E8
    uint8_t unk100[0x118 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(ArcadeGameplayController, 0x118);
} // namespace game::ui::arcade
using gameuiarcadeArcadeGameplayController = game::ui::arcade::ArcadeGameplayController;
} // namespace RED4ext

// clang-format on
