#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct FPSCounterGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiFPSCounterGameController";
    static constexpr const char* ALIAS = NAME;

    ink::TextWidgetReference counterWidget; // F8
    uint8_t unk110[0x118 - 0x110]; // 110
};
RED4EXT_ASSERT_SIZE(FPSCounterGameController, 0x118);
} // namespace game::ui
using gameuiFPSCounterGameController = game::ui::FPSCounterGameController;
} // namespace RED4ext

// clang-format on
