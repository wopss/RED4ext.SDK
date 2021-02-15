#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/population/SpawnerObjectCtrlAction.hpp>
#include <RED4ext/Types/generated/quest/IRetNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct SpawnManagerNodeType : quest::IRetNodeType
{
    static constexpr const char* NAME = "questSpawnManagerNodeType";
    static constexpr const char* ALIAS = NAME;

    population::SpawnerObjectCtrlAction action; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(SpawnManagerNodeType, 0x38);
} // namespace quest
} // namespace RED4ext
