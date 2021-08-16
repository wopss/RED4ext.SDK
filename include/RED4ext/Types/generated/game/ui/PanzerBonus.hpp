#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/SideScrollerMiniGameDynObjectLogicAdvanced.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PanzerBonus : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerBonus";
    static constexpr const char* ALIAS = "PanzerBonus";

    uint8_t unkC0[0xD0 - 0xC0]; // C0
    float fallingSpeed; // D0
    uint8_t unkD4[0xD8 - 0xD4]; // D4
};
RED4EXT_ASSERT_SIZE(PanzerBonus, 0xD8);
} // namespace game::ui
using PanzerBonus = game::ui::PanzerBonus;
} // namespace RED4ext
