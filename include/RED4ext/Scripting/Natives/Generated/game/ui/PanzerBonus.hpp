#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogicAdvanced.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerBonus : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerBonus";
    static constexpr const char* ALIAS = "PanzerBonus";

    uint8_t unkD0[0xE0 - 0xD0]; // D0
    float fallingSpeed; // E0
    uint8_t unkE4[0xE8 - 0xE4]; // E4
};
RED4EXT_ASSERT_SIZE(PanzerBonus, 0xE8);
} // namespace game::ui
using gameuiPanzerBonus = game::ui::PanzerBonus;
using PanzerBonus = game::ui::PanzerBonus;
} // namespace RED4ext

// clang-format on
