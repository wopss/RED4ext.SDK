#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PuppetAIManagerNodeDefinitionEntry.hpp>

namespace RED4ext
{
namespace quest { 
struct PuppetAIManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questPuppetAIManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::PuppetAIManagerNodeDefinitionEntry> entries; // 48
};
RED4EXT_ASSERT_SIZE(PuppetAIManagerNodeDefinition, 0x58);
} // namespace quest
} // namespace RED4ext
