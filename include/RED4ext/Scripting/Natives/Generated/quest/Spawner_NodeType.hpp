#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SpawnManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct Spawner_NodeType : quest::SpawnManagerNodeType
{
    static constexpr const char* NAME = "questSpawner_NodeType";
    static constexpr const char* ALIAS = NAME;

    NodeRef spawnerReference; // 38
};
RED4EXT_ASSERT_SIZE(Spawner_NodeType, 0x40);
} // namespace quest
using questSpawner_NodeType = quest::Spawner_NodeType;
} // namespace RED4ext

// clang-format on
