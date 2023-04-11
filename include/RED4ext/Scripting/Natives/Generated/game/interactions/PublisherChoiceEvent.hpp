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
struct PublisherChoiceEvent : game::interactions::PublisherBaseEvent
{
    static constexpr const char* NAME = "gameinteractionsPublisherChoiceEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0xB0 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(PublisherChoiceEvent, 0xB0);
} // namespace game::interactions
using gameinteractionsPublisherChoiceEvent = game::interactions::PublisherChoiceEvent;
} // namespace RED4ext

// clang-format on
