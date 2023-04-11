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
struct SideScrollerMiniGameDynObjectLogicAdvanced : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameDynObjectLogicAdvanced";
    static constexpr const char* ALIAS = "MinigameDynObjectAdvanced";

    uint8_t unk78[0xD0 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameDynObjectLogicAdvanced, 0xD0);
} // namespace game::ui
using gameuiSideScrollerMiniGameDynObjectLogicAdvanced = game::ui::SideScrollerMiniGameDynObjectLogicAdvanced;
using MinigameDynObjectAdvanced = game::ui::SideScrollerMiniGameDynObjectLogicAdvanced;
} // namespace RED4ext

// clang-format on
