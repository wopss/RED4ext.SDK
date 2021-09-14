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

    uint8_t unkC0[0xC4 - 0xC0]; // C0
    float mass; // C4
    float jumpForce; // C8
    float movementSpeed; // CC
    uint8_t unkD0[0xE8 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(ContraPlayer, 0xE8);
} // namespace game::ui
using ContraPlayer = game::ui::ContraPlayer;
} // namespace RED4ext
