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
struct HUDCyberwareInfoGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiHUDCyberwareInfoGameController";
    static constexpr const char* ALIAS = "HUDCyberwareInfoGameController";

    uint8_t unkF8[0x108 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(HUDCyberwareInfoGameController, 0x108);
} // namespace game::ui
using gameuiHUDCyberwareInfoGameController = game::ui::HUDCyberwareInfoGameController;
using HUDCyberwareInfoGameController = game::ui::HUDCyberwareInfoGameController;
} // namespace RED4ext

// clang-format on
