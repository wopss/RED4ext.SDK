#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/EntityManagerManageBinkComponent_NodeTypeParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerManageBinkComponent_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerManageBinkComponent_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::EntityManagerManageBinkComponent_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(EntityManagerManageBinkComponent_NodeType, 0x40);
} // namespace quest
using questEntityManagerManageBinkComponent_NodeType = quest::EntityManagerManageBinkComponent_NodeType;
} // namespace RED4ext

// clang-format on
