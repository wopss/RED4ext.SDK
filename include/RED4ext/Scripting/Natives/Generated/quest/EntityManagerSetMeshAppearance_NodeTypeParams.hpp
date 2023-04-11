#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerSetMeshAppearance_NodeTypeParams
{
    static constexpr const char* NAME = "questEntityManagerSetMeshAppearance_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 00
    bool isPlayer; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CName componentName; // 40
    CName appearanceName; // 48
};
RED4EXT_ASSERT_SIZE(EntityManagerSetMeshAppearance_NodeTypeParams, 0x50);
} // namespace quest
using questEntityManagerSetMeshAppearance_NodeTypeParams = quest::EntityManagerSetMeshAppearance_NodeTypeParams;
} // namespace RED4ext

// clang-format on
