#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerForceStat_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerForceStat_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 30
    game::data::StatType statType; // 68
    float value; // 6C
    bool isPlayer; // 70
    bool unforce; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
    CName debugSource; // 78
};
RED4EXT_ASSERT_SIZE(EntityManagerForceStat_NodeType, 0x80);
} // namespace quest
using questEntityManagerForceStat_NodeType = quest::EntityManagerForceStat_NodeType;
} // namespace RED4ext

// clang-format on
