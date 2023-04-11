#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/EntityManagerToggleComponent_NodeTypeParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerToggleComponent_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerToggleComponent_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::EntityManagerToggleComponent_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(EntityManagerToggleComponent_NodeType, 0x40);
} // namespace quest
using questEntityManagerToggleComponent_NodeType = quest::EntityManagerToggleComponent_NodeType;
} // namespace RED4ext

// clang-format on
