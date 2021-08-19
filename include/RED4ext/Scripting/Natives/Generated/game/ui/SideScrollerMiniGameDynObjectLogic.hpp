#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SideScrollerMiniGameDynObjectLogic : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameDynObjectLogic";
    static constexpr const char* ALIAS = NAME;

    uint32_t spawnPoolSize; // 68
    uint8_t unk6C[0x80 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameDynObjectLogic, 0x80);
} // namespace game::ui
} // namespace RED4ext
