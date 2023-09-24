#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense
{
struct HideUIDetectionEvent : red::Event
{
    static constexpr const char* NAME = "senseHideUIDetectionEvent";
    static constexpr const char* ALIAS = "HideUIDetectionEvent";

    bool shouldHideUIDetection; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(HideUIDetectionEvent, 0x48);
} // namespace sense
using senseHideUIDetectionEvent = sense::HideUIDetectionEvent;
using HideUIDetectionEvent = sense::HideUIDetectionEvent;
} // namespace RED4ext

// clang-format on
