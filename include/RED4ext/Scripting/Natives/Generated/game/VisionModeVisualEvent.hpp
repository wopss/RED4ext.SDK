#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VisionModeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct VisionModeVisualEvent : red::Event
{
    static constexpr const char* NAME = "gameVisionModeVisualEvent";
    static constexpr const char* ALIAS = NAME;

    TweakDBID group; // 40
    CName changedModule; // 48
    bool activated; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    CName meshComponentName; // 58
    game::VisionModeType type; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(VisionModeVisualEvent, 0x68);
} // namespace game
using gameVisionModeVisualEvent = game::VisionModeVisualEvent;
} // namespace RED4ext

// clang-format on
