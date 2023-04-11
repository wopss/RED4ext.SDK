#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/IGraphObjectDefinition.hpp>

namespace RED4ext
{
namespace graph { struct GraphConnectionDefinition; }

namespace graph
{
struct GraphSocketDefinition : graph::IGraphObjectDefinition
{
    static constexpr const char* NAME = "graphGraphSocketDefinition";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
    DynArray<Handle<graph::GraphConnectionDefinition>> connections; // 38
    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GraphSocketDefinition, 0x58);
} // namespace graph
using graphGraphSocketDefinition = graph::GraphSocketDefinition;
} // namespace RED4ext

// clang-format on
