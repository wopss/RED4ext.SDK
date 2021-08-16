#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn { 
struct OutputSocketStamp
{
    static constexpr const char* NAME = "scnOutputSocketStamp";
    static constexpr const char* ALIAS = NAME;

    uint16_t name; // 00
    uint16_t ordinal; // 02
};
RED4EXT_ASSERT_SIZE(OutputSocketStamp, 0x4);
} // namespace scn
} // namespace RED4ext
