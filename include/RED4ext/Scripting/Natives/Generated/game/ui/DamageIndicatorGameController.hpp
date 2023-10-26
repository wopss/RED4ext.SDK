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
struct __declspec(align(0x10)) DamageIndicatorGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiDamageIndicatorGameController";
    static constexpr const char* ALIAS = "DamageIndicatorGameController";

    uint8_t unkF8[0x188 - 0xF8]; // F8
    uint8_t maxVisibleParts; // 188
    uint8_t unk189[0x190 - 0x189]; // 189
};
RED4EXT_ASSERT_SIZE(DamageIndicatorGameController, 0x190);
} // namespace game::ui
using gameuiDamageIndicatorGameController = game::ui::DamageIndicatorGameController;
using DamageIndicatorGameController = game::ui::DamageIndicatorGameController;
} // namespace RED4ext

// clang-format on
