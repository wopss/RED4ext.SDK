#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ProficiencyType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerLevelUpProficiency_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerLevelUpProficiency_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::data::ProficiencyType type; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(EntityManagerLevelUpProficiency_NodeType, 0x38);
} // namespace quest
using questEntityManagerLevelUpProficiency_NodeType = quest::EntityManagerLevelUpProficiency_NodeType;
} // namespace RED4ext

// clang-format on
