#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerHUDGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiPanzerHUDGameController";
    static constexpr const char* ALIAS = "PanzerHUDGameController";

    uint8_t unkF8[0x138 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(PanzerHUDGameController, 0x138);
} // namespace game::ui
using gameuiPanzerHUDGameController = game::ui::PanzerHUDGameController;
using PanzerHUDGameController = game::ui::PanzerHUDGameController;
} // namespace RED4ext

// clang-format on
