#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { struct MinigameState; }

namespace game::ui
{
struct OnGameFinishEvent : red::Event
{
    static constexpr const char* NAME = "gameuiOnGameFinishEvent";
    static constexpr const char* ALIAS = "GameFinishEvent";

    CName gameName; // 40
    Handle<game::ui::MinigameState> gameState; // 48
};
RED4EXT_ASSERT_SIZE(OnGameFinishEvent, 0x58);
} // namespace game::ui
using gameuiOnGameFinishEvent = game::ui::OnGameFinishEvent;
using GameFinishEvent = game::ui::OnGameFinishEvent;
} // namespace RED4ext

// clang-format on
