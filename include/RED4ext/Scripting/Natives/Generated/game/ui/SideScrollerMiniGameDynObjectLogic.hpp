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
struct SideScrollerMiniGameDynObjectLogic : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameDynObjectLogic";
    static constexpr const char* ALIAS = "MinigameDynObject";

    uint32_t spawnPoolSize; // 78
    uint8_t unk7C[0x90 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameDynObjectLogic, 0x90);
} // namespace game::ui
using gameuiSideScrollerMiniGameDynObjectLogic = game::ui::SideScrollerMiniGameDynObjectLogic;
using MinigameDynObject = game::ui::SideScrollerMiniGameDynObjectLogic;
} // namespace RED4ext

// clang-format on
