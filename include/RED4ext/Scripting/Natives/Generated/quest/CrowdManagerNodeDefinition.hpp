#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct ICrowdManager_NodeType; }

namespace quest
{
struct CrowdManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questCrowdManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ICrowdManager_NodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(CrowdManagerNodeDefinition, 0x58);
} // namespace quest
using questCrowdManagerNodeDefinition = quest::CrowdManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
