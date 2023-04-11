#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameStateAdvanced.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerGameState : game::ui::SideScrollerMiniGameStateAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerGameState";
    static constexpr const char* ALIAS = "PanzerGameState";

};
RED4EXT_ASSERT_SIZE(PanzerGameState, 0xA0);
} // namespace game::ui
using gameuiPanzerGameState = game::ui::PanzerGameState;
using PanzerGameState = game::ui::PanzerGameState;
} // namespace RED4ext

// clang-format on
