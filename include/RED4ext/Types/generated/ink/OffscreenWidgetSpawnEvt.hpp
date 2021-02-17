#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace ink { 
struct OffscreenWidgetSpawnEvt : red::Event
{
    static constexpr const char* NAME = "inkOffscreenWidgetSpawnEvt";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xC8 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(OffscreenWidgetSpawnEvt, 0xC8);
} // namespace ink
} // namespace RED4ext
