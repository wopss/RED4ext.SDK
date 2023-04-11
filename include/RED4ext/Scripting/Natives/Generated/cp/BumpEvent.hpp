#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace cp
{
struct BumpEvent : red::Event
{
    static constexpr const char* NAME = "cpBumpEvent";
    static constexpr const char* ALIAS = NAME;

    uint32_t amount; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(BumpEvent, 0x48);
} // namespace cp
using cpBumpEvent = cp::BumpEvent;
} // namespace RED4ext

// clang-format on
