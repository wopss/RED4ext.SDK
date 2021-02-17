#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { 
struct ClearForcedBehavioursNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questClearForcedBehavioursNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppet; // 48
};
RED4EXT_ASSERT_SIZE(ClearForcedBehavioursNodeDefinition, 0x80);
} // namespace quest
} // namespace RED4ext
