#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerChangeAppearance_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerChangeAppearance_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityRef; // 30
    bool prefetchOnly; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
    CName appearanceName; // 70
};
RED4EXT_ASSERT_SIZE(EntityManagerChangeAppearance_NodeType, 0x78);
} // namespace quest
using questEntityManagerChangeAppearance_NodeType = quest::EntityManagerChangeAppearance_NodeType;
} // namespace RED4ext

// clang-format on
