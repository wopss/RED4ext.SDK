#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace game
{
struct SetupControlledByStoryEvent : AI::AIEvent
{
    static constexpr const char* NAME = "gameSetupControlledByStoryEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x80 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(SetupControlledByStoryEvent, 0x80);
} // namespace game
using gameSetupControlledByStoryEvent = game::SetupControlledByStoryEvent;
} // namespace RED4ext

// clang-format on
