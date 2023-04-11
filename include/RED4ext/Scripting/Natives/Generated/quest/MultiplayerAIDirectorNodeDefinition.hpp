#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct MultiplayerAIDirectorParams; }

namespace quest
{
struct MultiplayerAIDirectorNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questMultiplayerAIDirectorNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::MultiplayerAIDirectorParams> params; // 48
};
RED4EXT_ASSERT_SIZE(MultiplayerAIDirectorNodeDefinition, 0x58);
} // namespace quest
using questMultiplayerAIDirectorNodeDefinition = quest::MultiplayerAIDirectorNodeDefinition;
} // namespace RED4ext

// clang-format on
