#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct DamageIndicatorGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiDamageIndicatorGameController";
    static constexpr const char* ALIAS = "DamageIndicatorGameController";

    uint8_t unkE8[0x164 - 0xE8]; // E8
    uint8_t maxVisibleParts; // 164
    uint8_t unk165[0x170 - 0x165]; // 165
};
RED4EXT_ASSERT_SIZE(DamageIndicatorGameController, 0x170);
} // namespace game::ui
using DamageIndicatorGameController = game::ui::DamageIndicatorGameController;
} // namespace RED4ext
