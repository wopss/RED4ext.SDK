#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SpawnManagerNodeActionEntry.hpp>

namespace RED4ext
{
namespace quest
{
struct SpawnManagerNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questSpawnManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::SpawnManagerNodeActionEntry> actions; // 48
    uint8_t unk58[0x78 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(SpawnManagerNodeDefinition, 0x78);
} // namespace quest
using questSpawnManagerNodeDefinition = quest::SpawnManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
