#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace graph
{
struct IGraphObjectDefinition : ISerializable
{
    static constexpr const char* NAME = "graphIGraphObjectDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IGraphObjectDefinition, 0x30);
} // namespace graph
using graphIGraphObjectDefinition = graph::IGraphObjectDefinition;
} // namespace RED4ext

// clang-format on
