#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/LogicalBaseNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct LogicalXorNodeDefinition : quest::LogicalBaseNodeDefinition
{
    static constexpr const char* NAME = "questLogicalXorNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LogicalXorNodeDefinition, 0x50);
} // namespace quest
using questLogicalXorNodeDefinition = quest::LogicalXorNodeDefinition;
} // namespace RED4ext

// clang-format on
