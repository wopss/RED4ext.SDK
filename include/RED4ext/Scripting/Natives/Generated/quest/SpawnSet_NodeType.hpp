#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SpawnManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SpawnSet_NodeType : quest::SpawnManagerNodeType
{
    static constexpr const char* NAME = "questSpawnSet_NodeType";
    static constexpr const char* ALIAS = NAME;

    NodeRef reference; // 38
    uint8_t unk40[0x48 - 0x40]; // 40
    CName entryName; // 48
    CName phaseName; // 50
};
RED4EXT_ASSERT_SIZE(SpawnSet_NodeType, 0x58);
} // namespace quest
using questSpawnSet_NodeType = quest::SpawnSet_NodeType;
} // namespace RED4ext

// clang-format on
