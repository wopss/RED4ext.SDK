#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IGameManagerNonSignalStoppingNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct LootPurge_NodeType : quest::IGameManagerNonSignalStoppingNodeType
{
    static constexpr const char* NAME = "questLootPurge_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LootPurge_NodeType, 0x38);
} // namespace quest
using questLootPurge_NodeType = quest::LootPurge_NodeType;
} // namespace RED4ext

// clang-format on
