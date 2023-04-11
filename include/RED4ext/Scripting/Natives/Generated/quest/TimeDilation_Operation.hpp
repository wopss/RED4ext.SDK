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
struct TimeDilation_Operation : ISerializable
{
    static constexpr const char* NAME = "questTimeDilation_Operation";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TimeDilation_Operation, 0x30);
} // namespace quest
using questTimeDilation_Operation = quest::TimeDilation_Operation;
} // namespace RED4ext

// clang-format on
