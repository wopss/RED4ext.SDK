#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IAudioNodeType; }

namespace quest
{
struct AudioNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questAudioNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IAudioNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(AudioNodeDefinition, 0x58);
} // namespace quest
using questAudioNodeDefinition = quest::AudioNodeDefinition;
} // namespace RED4ext

// clang-format on
