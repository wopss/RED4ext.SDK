#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace red { 
struct TaskProgressMessage
{
    static constexpr const char* NAME = "redTaskProgressMessage";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
    float progress; // 04
    float processingTime; // 08
};
RED4EXT_ASSERT_SIZE(TaskProgressMessage, 0xC);
} // namespace red
} // namespace RED4ext
