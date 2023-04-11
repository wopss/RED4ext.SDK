#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SideScrollerMiniGameCollisionLogicAdvanced : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameCollisionLogicAdvanced";
    static constexpr const char* ALIAS = "MinigameCollisionLogicAdvanced";

    uint8_t unk78[0xC0 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameCollisionLogicAdvanced, 0xC0);
} // namespace game::ui
using gameuiSideScrollerMiniGameCollisionLogicAdvanced = game::ui::SideScrollerMiniGameCollisionLogicAdvanced;
using MinigameCollisionLogicAdvanced = game::ui::SideScrollerMiniGameCollisionLogicAdvanced;
} // namespace RED4ext

// clang-format on
