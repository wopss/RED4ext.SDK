#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/GraphDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct GraphDefinition : graph::GraphDefinition
{
    static constexpr const char* NAME = "questGraphDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(GraphDefinition, 0x40);
} // namespace quest
using questGraphDefinition = quest::GraphDefinition;
} // namespace RED4ext

// clang-format on
