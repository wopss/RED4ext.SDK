#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/quest/SignalStoppingNodeDefinition.hpp>
#include <RED4ext/Types/generated/quest/SpawnManagerNodeActionEntry.hpp>

namespace RED4ext
{
namespace quest { 
struct SpawnManagerNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questSpawnManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::SpawnManagerNodeActionEntry> actions; // 48
    uint8_t unk58[0x78 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(SpawnManagerNodeDefinition, 0x78);
} // namespace quest
} // namespace RED4ext
