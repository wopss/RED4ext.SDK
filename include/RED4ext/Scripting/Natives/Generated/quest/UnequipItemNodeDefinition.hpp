#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/UnequipItemParams.hpp>

namespace RED4ext
{
namespace quest
{
struct UnequipItemNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questUnequipItemNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityReference; // 48
    quest::UnequipItemParams params; // 80
    uint8_t unk8C[0x90 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(UnequipItemNodeDefinition, 0x90);
} // namespace quest
using questUnequipItemNodeDefinition = quest::UnequipItemNodeDefinition;
} // namespace RED4ext

// clang-format on
