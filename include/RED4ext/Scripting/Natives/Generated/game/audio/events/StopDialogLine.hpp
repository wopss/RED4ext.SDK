#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct StopDialogLine : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsStopDialogLine";
    static constexpr const char* ALIAS = NAME;

    CRUID stringId; // 40
    float fadeOut; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(StopDialogLine, 0x50);
} // namespace game::audio::events
using gameaudioeventsStopDialogLine = game::audio::events::StopDialogLine;
} // namespace RED4ext

// clang-format on
