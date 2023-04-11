#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace graph { struct GraphDefinition; }

namespace graph
{
struct GraphResource : CResource
{
    static constexpr const char* NAME = "graphGraphResource";
    static constexpr const char* ALIAS = NAME;

    Handle<graph::GraphDefinition> graph; // 40
};
RED4EXT_ASSERT_SIZE(GraphResource, 0x50);
} // namespace graph
using graphGraphResource = graph::GraphResource;
} // namespace RED4ext

// clang-format on
