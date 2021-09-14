#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct DamageIndicatorGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiDamageIndicatorGameController";
    static constexpr const char* ALIAS = "DamageIndicatorGameController";

    uint8_t unkE8[0x168 - 0xE8]; // E8
    uint8_t maxVisibleParts; // 168
    uint8_t unk169[0x170 - 0x169]; // 169
};
RED4EXT_ASSERT_SIZE(DamageIndicatorGameController, 0x170);
} // namespace game::ui
using DamageIndicatorGameController = game::ui::DamageIndicatorGameController;
} // namespace RED4ext
