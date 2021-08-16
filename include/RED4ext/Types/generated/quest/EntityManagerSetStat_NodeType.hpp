#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/game/data/StatType.hpp>
#include <RED4ext/Types/generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct EntityManagerSetStat_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerSetStat_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 30
    game::data::StatType statType; // 68
    float value; // 6C
    bool isPlayer; // 70
    bool setExactValue; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
};
RED4EXT_ASSERT_SIZE(EntityManagerSetStat_NodeType, 0x78);
} // namespace quest
} // namespace RED4ext
