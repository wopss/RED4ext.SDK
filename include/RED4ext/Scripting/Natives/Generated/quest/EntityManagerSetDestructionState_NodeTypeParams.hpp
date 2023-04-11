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
struct EntityManagerSetDestructionState_NodeTypeParams
{
    static constexpr const char* NAME = "questEntityManagerSetDestructionState_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 00
    CName tag; // 38
};
RED4EXT_ASSERT_SIZE(EntityManagerSetDestructionState_NodeTypeParams, 0x40);
} // namespace quest
using questEntityManagerSetDestructionState_NodeTypeParams = quest::EntityManagerSetDestructionState_NodeTypeParams;
} // namespace RED4ext

// clang-format on
