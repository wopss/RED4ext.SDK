#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { struct MinigameState; }

namespace game::ui
{
struct OnHitPlayerEvent : red::Event
{
    static constexpr const char* NAME = "gameuiOnHitPlayerEvent";
    static constexpr const char* ALIAS = "HitPlayerEvent";

    Handle<game::ui::MinigameState> gameState; // 40
};
RED4EXT_ASSERT_SIZE(OnHitPlayerEvent, 0x50);
} // namespace game::ui
using gameuiOnHitPlayerEvent = game::ui::OnHitPlayerEvent;
using HitPlayerEvent = game::ui::OnHitPlayerEvent;
} // namespace RED4ext

// clang-format on
