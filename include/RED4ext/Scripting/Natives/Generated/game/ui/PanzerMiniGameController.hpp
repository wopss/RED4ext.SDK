#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameControllerAdvanced.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PanzerMiniGameController : game::ui::SideScrollerMiniGameControllerAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerMiniGameController";
    static constexpr const char* ALIAS = "PanzerMiniGameController";

};
RED4EXT_ASSERT_SIZE(PanzerMiniGameController, 0x110);
} // namespace game::ui
using PanzerMiniGameController = game::ui::PanzerMiniGameController;
} // namespace RED4ext
