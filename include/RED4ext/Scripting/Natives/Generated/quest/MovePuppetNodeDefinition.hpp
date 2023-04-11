#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ConfigurableAICommandNode.hpp>

namespace RED4ext
{
namespace quest { struct AICommandParams; }

namespace quest
{
struct MovePuppetNodeDefinition : quest::ConfigurableAICommandNode
{
    static constexpr const char* NAME = "questMovePuppetNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityReference; // 48
    CName moveType; // 80
    Handle<quest::AICommandParams> nodeParams; // 88
};
RED4EXT_ASSERT_SIZE(MovePuppetNodeDefinition, 0x98);
} // namespace quest
using questMovePuppetNodeDefinition = quest::MovePuppetNodeDefinition;
} // namespace RED4ext

// clang-format on
