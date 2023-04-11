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
struct IGraphNodeCondition : ISerializable
{
    static constexpr const char* NAME = "graphIGraphNodeCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IGraphNodeCondition, 0x30);
} // namespace graph
using graphIGraphNodeCondition = graph::IGraphNodeCondition;
} // namespace RED4ext

// clang-format on
