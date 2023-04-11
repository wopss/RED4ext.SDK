#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace quest
{
struct TimeDilation_NodeTypeParam : ISerializable
{
    static constexpr const char* NAME = "questTimeDilation_NodeTypeParam";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TimeDilation_NodeTypeParam, 0x30);
} // namespace quest
using questTimeDilation_NodeTypeParam = quest::TimeDilation_NodeTypeParam;
} // namespace RED4ext

// clang-format on
