#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct ITriggerManagerNodeType; }

namespace quest
{
struct TriggerManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questTriggerManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ITriggerManagerNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(TriggerManagerNodeDefinition, 0x58);
} // namespace quest
using questTriggerManagerNodeDefinition = quest::TriggerManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
