#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { struct SideScrollerMiniGameStateAdvanced; }

namespace game::ui
{
struct OnGameFinishEventAdvanced : red::Event
{
    static constexpr const char* NAME = "gameuiOnGameFinishEventAdvanced";
    static constexpr const char* ALIAS = "GameFinishEventAdvanced";

    Handle<game::ui::SideScrollerMiniGameStateAdvanced> gameState; // 40
};
RED4EXT_ASSERT_SIZE(OnGameFinishEventAdvanced, 0x50);
} // namespace game::ui
using gameuiOnGameFinishEventAdvanced = game::ui::OnGameFinishEventAdvanced;
using GameFinishEventAdvanced = game::ui::OnGameFinishEventAdvanced;
} // namespace RED4ext

// clang-format on
