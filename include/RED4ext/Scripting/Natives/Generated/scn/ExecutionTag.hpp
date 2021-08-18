#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn { 
struct ExecutionTag
{
    static constexpr const char* NAME = "scnExecutionTag";
    static constexpr const char* ALIAS = NAME;

    uint8_t flags; // 00
};
RED4EXT_ASSERT_SIZE(ExecutionTag, 0x1);
} // namespace scn
} // namespace RED4ext
