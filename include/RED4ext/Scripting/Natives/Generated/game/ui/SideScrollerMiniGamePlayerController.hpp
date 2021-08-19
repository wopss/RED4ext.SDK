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
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x78 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGamePlayerController, 0x78);
} // namespace game::ui
} // namespace RED4ext
