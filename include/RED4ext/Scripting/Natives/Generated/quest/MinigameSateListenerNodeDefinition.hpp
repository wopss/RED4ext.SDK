#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct MinigameSateListenerNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questMinigameSateListenerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MinigameSateListenerNodeDefinition, 0x48);
} // namespace quest
using questMinigameSateListenerNodeDefinition = quest::MinigameSateListenerNodeDefinition;
} // namespace RED4ext

// clang-format on
