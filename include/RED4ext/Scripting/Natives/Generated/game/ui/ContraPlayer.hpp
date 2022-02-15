#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogicAdvanced.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ContraPlayer : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiContraPlayer";
    static constexpr const char* ALIAS = "ContraPlayer";

    uint8_t unkD0[0xD4 - 0xD0]; // D0
    float mass; // D4
    float jumpForce; // D8
    float movementSpeed; // DC
    uint8_t unkE0[0xF8 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(ContraPlayer, 0xF8);
} // namespace game::ui
using ContraPlayer = game::ui::ContraPlayer;
} // namespace RED4ext
