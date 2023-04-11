#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/GameStatePropertyChangedCallback.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SideScrollerMiniGameStateAdvanced : IScriptable
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameStateAdvanced";
    static constexpr const char* ALIAS = "MinigameStateAdvanced";

    game::ui::GameStatePropertyChangedCallback PropertyChanged; // 40
    CName opertyMaxScore; // 78
    CName opertyCurrentLives; // 80
    CName opertyCurrentScore; // 88
    uint8_t unk90[0xA0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameStateAdvanced, 0xA0);
} // namespace game::ui
using gameuiSideScrollerMiniGameStateAdvanced = game::ui::SideScrollerMiniGameStateAdvanced;
using MinigameStateAdvanced = game::ui::SideScrollerMiniGameStateAdvanced;
} // namespace RED4ext

// clang-format on
