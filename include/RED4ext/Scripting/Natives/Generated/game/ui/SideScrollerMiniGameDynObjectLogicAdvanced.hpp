#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SideScrollerMiniGameDynObjectLogicAdvanced : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameDynObjectLogicAdvanced";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0xC0 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameDynObjectLogicAdvanced, 0xC0);
} // namespace game::ui
} // namespace RED4ext
