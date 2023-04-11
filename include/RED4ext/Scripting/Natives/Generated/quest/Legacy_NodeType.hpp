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
struct Legacy_NodeType : quest::SpawnManagerNodeType
{
    static constexpr const char* NAME = "questLegacy_NodeType";
    static constexpr const char* ALIAS = NAME;

    NodeRef spawnerReference; // 38
    CName communityEntryName; // 40
    CName communityEntryPhaseName; // 48
};
RED4EXT_ASSERT_SIZE(Legacy_NodeType, 0x50);
} // namespace quest
using questLegacy_NodeType = quest::Legacy_NodeType;
} // namespace RED4ext

// clang-format on
