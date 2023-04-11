#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/IGraphObjectDefinition.hpp>

namespace RED4ext
{
namespace graph { struct GraphSocketDefinition; }

namespace graph
{
struct GraphConnectionDefinition : graph::IGraphObjectDefinition
{
    static constexpr const char* NAME = "graphGraphConnectionDefinition";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<graph::GraphSocketDefinition> source; // 30
    WeakHandle<graph::GraphSocketDefinition> destination; // 40
};
RED4EXT_ASSERT_SIZE(GraphConnectionDefinition, 0x50);
} // namespace graph
using graphGraphConnectionDefinition = graph::GraphConnectionDefinition;
} // namespace RED4ext

// clang-format on
