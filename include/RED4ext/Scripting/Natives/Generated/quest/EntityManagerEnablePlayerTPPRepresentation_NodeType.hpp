#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerEnablePlayerTPPRepresentation_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerEnablePlayerTPPRepresentation_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(EntityManagerEnablePlayerTPPRepresentation_NodeType, 0x38);
} // namespace quest
using questEntityManagerEnablePlayerTPPRepresentation_NodeType = quest::EntityManagerEnablePlayerTPPRepresentation_NodeType;
} // namespace RED4ext

// clang-format on
