#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SideScrollerMiniGameCollisionLogic : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameCollisionLogic";
    static constexpr const char* ALIAS = "MinigameCollisionLogic";

    uint8_t unk68[0xA0 - 0x68]; // 68
    Vector2 colliderPositionOffset; // A0
    Vector2 colliderSizeOffset; // A8
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameCollisionLogic, 0xB0);
} // namespace game::ui
using MinigameCollisionLogic = game::ui::SideScrollerMiniGameCollisionLogic;
} // namespace RED4ext
