#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MultiplayerTeleportPuppetParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct MultiplayerTeleportPuppetNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questMultiplayerTeleportPuppetNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    quest::MultiplayerTeleportPuppetParams params; // 48
};
RED4EXT_ASSERT_SIZE(MultiplayerTeleportPuppetNodeDefinition, 0xD8);
} // namespace quest
using questMultiplayerTeleportPuppetNodeDefinition = quest::MultiplayerTeleportPuppetNodeDefinition;
} // namespace RED4ext

// clang-format on
