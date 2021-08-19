#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::interactions { 
struct PublisherBaseEvent
{
    static constexpr const char* NAME = "gameinteractionsPublisherBaseEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(PublisherBaseEvent, 0x8);
} // namespace game::interactions
} // namespace RED4ext
