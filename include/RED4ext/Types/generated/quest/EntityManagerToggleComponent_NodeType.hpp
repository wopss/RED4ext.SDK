#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/quest/EntityManagerToggleComponent_NodeTypeParams.hpp>
#include <RED4ext/Types/generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct EntityManagerToggleComponent_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerToggleComponent_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::EntityManagerToggleComponent_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(EntityManagerToggleComponent_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
