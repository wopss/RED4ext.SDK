#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SideScrollerMiniGameCollisionLogic : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameCollisionLogic";
    static constexpr const char* ALIAS = "MinigameCollisionLogic";

    uint8_t unk78[0xB0 - 0x78]; // 78
    Vector2 colliderPositionOffset; // B0
    Vector2 colliderSizeOffset; // B8
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameCollisionLogic, 0xC0);
} // namespace game::ui
using gameuiSideScrollerMiniGameCollisionLogic = game::ui::SideScrollerMiniGameCollisionLogic;
using MinigameCollisionLogic = game::ui::SideScrollerMiniGameCollisionLogic;
} // namespace RED4ext

// clang-format on
