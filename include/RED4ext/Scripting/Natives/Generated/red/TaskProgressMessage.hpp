#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace red
{
struct TaskProgressMessage
{
    static constexpr const char* NAME = "redTaskProgressMessage";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
    uint32_t parent; // 04
    float progress; // 08
    float processingTime; // 0C
};
RED4EXT_ASSERT_SIZE(TaskProgressMessage, 0x10);
} // namespace red
using redTaskProgressMessage = red::TaskProgressMessage;
} // namespace RED4ext

// clang-format on
