#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/PublisherBaseEvent.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct PublisherActivationEvent : game::interactions::PublisherBaseEvent
{
    static constexpr const char* NAME = "gameinteractionsPublisherActivationEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x10 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(PublisherActivationEvent, 0x10);
} // namespace game::interactions
using gameinteractionsPublisherActivationEvent = game::interactions::PublisherActivationEvent;
} // namespace RED4ext

// clang-format on
