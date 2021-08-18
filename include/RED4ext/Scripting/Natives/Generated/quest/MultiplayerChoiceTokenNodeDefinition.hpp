#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MultiplayerChoiceTokenParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { 
struct MultiplayerChoiceTokenNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questMultiplayerChoiceTokenNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    quest::MultiplayerChoiceTokenParams params; // 48
};
RED4EXT_ASSERT_SIZE(MultiplayerChoiceTokenNodeDefinition, 0x58);
} // namespace quest
} // namespace RED4ext
