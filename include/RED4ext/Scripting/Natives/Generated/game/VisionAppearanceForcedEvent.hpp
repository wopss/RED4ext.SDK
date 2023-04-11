#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct VisionAppearanceForcedEvent : red::Event
{
    static constexpr const char* NAME = "gameVisionAppearanceForcedEvent";
    static constexpr const char* ALIAS = NAME;

    bool state; // 40
    uint8_t unk41[0x58 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(VisionAppearanceForcedEvent, 0x58);
} // namespace game
using gameVisionAppearanceForcedEvent = game::VisionAppearanceForcedEvent;
} // namespace RED4ext

// clang-format on
