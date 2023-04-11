#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerCoverDirection.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct PlayerCoverStatusChangedEvent : red::Event
{
    static constexpr const char* NAME = "gamePlayerCoverStatusChangedEvent";
    static constexpr const char* ALIAS = "PlayerCoverStatusChangedEvent";

    game::PlayerCoverDirection direction; // 40
    bool fullyBehindCover; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(PlayerCoverStatusChangedEvent, 0x48);
} // namespace game
using gamePlayerCoverStatusChangedEvent = game::PlayerCoverStatusChangedEvent;
using PlayerCoverStatusChangedEvent = game::PlayerCoverStatusChangedEvent;
} // namespace RED4ext

// clang-format on
