#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IEntityManager_NodeType; }

namespace quest
{
struct EntityManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questEntityManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IEntityManager_NodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(EntityManagerNodeDefinition, 0x58);
} // namespace quest
using questEntityManagerNodeDefinition = quest::EntityManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
