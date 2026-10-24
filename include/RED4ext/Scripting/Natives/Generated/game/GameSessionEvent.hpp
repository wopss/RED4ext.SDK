#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CallbackSystemEvent.hpp>

namespace RED4ext
{
namespace game
{
struct GameSessionEvent : game::CallbackSystemEvent
{
    static constexpr const char* NAME = "gameGameSessionEvent";
    static constexpr const char* ALIAS = "GameSessionEvent";

    bool preGame; // 48
    bool restored; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
};
RED4EXT_ASSERT_SIZE(GameSessionEvent, 0x50);
} // namespace game
using gameGameSessionEvent = game::GameSessionEvent;
using GameSessionEvent = game::GameSessionEvent;
} // namespace RED4ext

// clang-format on
