#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameStateAdvanced.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ContraGameState : game::ui::SideScrollerMiniGameStateAdvanced
{
    static constexpr const char* NAME = "gameuiContraGameState";
    static constexpr const char* ALIAS = "ContraGameState";

};
RED4EXT_ASSERT_SIZE(ContraGameState, 0xA0);
} // namespace game::ui
using ContraGameState = game::ui::ContraGameState;
} // namespace RED4ext
