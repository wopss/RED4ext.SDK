#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SideScrollerMiniGameDynObjectLogic : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameDynObjectLogic";
    static constexpr const char* ALIAS = "MinigameDynObject";

    uint32_t spawnPoolSize; // 68
    uint8_t unk6C[0x80 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameDynObjectLogic, 0x80);
} // namespace game::ui
using MinigameDynObject = game::ui::SideScrollerMiniGameDynObjectLogic;
} // namespace RED4ext
