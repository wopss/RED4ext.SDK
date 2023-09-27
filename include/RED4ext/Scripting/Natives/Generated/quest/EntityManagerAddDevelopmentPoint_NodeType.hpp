#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DevelopmentPointType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerAddDevelopmentPoint_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerAddDevelopmentPoint_NodeType";
    static constexpr const char* ALIAS = NAME;

    int32_t value; // 30
    game::data::DevelopmentPointType type; // 34
};
RED4EXT_ASSERT_SIZE(EntityManagerAddDevelopmentPoint_NodeType, 0x38);
} // namespace quest
using questEntityManagerAddDevelopmentPoint_NodeType = quest::EntityManagerAddDevelopmentPoint_NodeType;
} // namespace RED4ext

// clang-format on
