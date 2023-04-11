#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerToggleMirrorsArea_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerToggleMirrorsArea_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 30
    bool isInMirrorsArea; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(EntityManagerToggleMirrorsArea_NodeType, 0x70);
} // namespace quest
using questEntityManagerToggleMirrorsArea_NodeType = quest::EntityManagerToggleMirrorsArea_NodeType;
} // namespace RED4ext

// clang-format on
