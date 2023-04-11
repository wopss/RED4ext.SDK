#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/DialogLineEventData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct DialogLine : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsDialogLine";
    static constexpr const char* ALIAS = "DialogLineEvent";

    audio::DialogLineEventData data; // 40
};
RED4EXT_ASSERT_SIZE(DialogLine, 0x68);
} // namespace game::audio::events
using gameaudioeventsDialogLine = game::audio::events::DialogLine;
using DialogLineEvent = game::audio::events::DialogLine;
} // namespace RED4ext

// clang-format on
