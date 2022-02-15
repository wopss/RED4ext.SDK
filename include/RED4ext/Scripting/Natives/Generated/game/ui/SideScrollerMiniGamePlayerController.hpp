#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SideScrollerMiniGamePlayerController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGamePlayerController";
    static constexpr const char* ALIAS = "MinigamePlayerController";

    uint8_t unk78[0x88 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGamePlayerController, 0x88);
} // namespace game::ui
using MinigamePlayerController = game::ui::SideScrollerMiniGamePlayerController;
} // namespace RED4ext
