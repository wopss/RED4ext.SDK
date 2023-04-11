#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IItemManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetLootInteractionAccess_NodeType : quest::IItemManagerNodeType
{
    static constexpr const char* NAME = "questSetLootInteractionAccess_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 30
    bool accessible; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(SetLootInteractionAccess_NodeType, 0x70);
} // namespace quest
using questSetLootInteractionAccess_NodeType = quest::SetLootInteractionAccess_NodeType;
} // namespace RED4ext

// clang-format on
