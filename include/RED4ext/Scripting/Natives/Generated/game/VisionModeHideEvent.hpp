#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VisionModeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct VisionModeHideEvent : red::Event
{
    static constexpr const char* NAME = "gameVisionModeHideEvent";
    static constexpr const char* ALIAS = NAME;

    bool hide; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    game::VisionModeType type; // 44
};
RED4EXT_ASSERT_SIZE(VisionModeHideEvent, 0x48);
} // namespace game
using gameVisionModeHideEvent = game::VisionModeHideEvent;
} // namespace RED4ext

// clang-format on
