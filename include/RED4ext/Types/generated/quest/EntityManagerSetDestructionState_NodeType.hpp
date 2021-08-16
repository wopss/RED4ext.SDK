#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/quest/EntityManagerSetDestructionState_NodeTypeParams.hpp>
#include <RED4ext/Types/generated/quest/IEntityManager_NodeType.hpp>
#include <RED4ext/Types/generated/quest/SetDestructionStateAction.hpp>

namespace RED4ext
{
namespace quest { 
struct EntityManagerSetDestructionState_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerSetDestructionState_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::SetDestructionStateAction action; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<quest::EntityManagerSetDestructionState_NodeTypeParams> params; // 38
};
RED4EXT_ASSERT_SIZE(EntityManagerSetDestructionState_NodeType, 0x48);
} // namespace quest
} // namespace RED4ext
