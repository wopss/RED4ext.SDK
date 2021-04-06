#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
struct CBaseEngine
{
    static constexpr const char* NAME = "CBaseEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x250 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(CBaseEngine, 0x250);
} // namespace RED4ext
