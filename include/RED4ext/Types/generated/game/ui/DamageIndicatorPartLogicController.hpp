#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/BaseDirectionalIndicatorPartLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct DamageIndicatorPartLogicController : game::ui::BaseDirectionalIndicatorPartLogicController
{
    static constexpr const char* NAME = "gameuiDamageIndicatorPartLogicController";
    static constexpr const char* ALIAS = "DamageIndicatorPartLogicController";

    uint8_t unkC0[0xDC - 0xC0]; // C0
    float maxDistanceForSharedIndicators; // DC
    uint8_t unkE0[0xF0 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(DamageIndicatorPartLogicController, 0xF0);
} // namespace game::ui
using DamageIndicatorPartLogicController = game::ui::DamageIndicatorPartLogicController;
} // namespace RED4ext
