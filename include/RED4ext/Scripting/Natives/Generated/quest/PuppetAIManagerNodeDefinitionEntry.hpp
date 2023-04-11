#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StoryTier.hpp>

namespace RED4ext
{
namespace quest
{
struct PuppetAIManagerNodeDefinitionEntry
{
    static constexpr const char* NAME = "questPuppetAIManagerNodeDefinitionEntry";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityReference; // 00
    game::StoryTier aiTier; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(PuppetAIManagerNodeDefinitionEntry, 0x40);
} // namespace quest
using questPuppetAIManagerNodeDefinitionEntry = quest::PuppetAIManagerNodeDefinitionEntry;
} // namespace RED4ext

// clang-format on
