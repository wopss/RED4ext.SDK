#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct GameTime
{
    static constexpr const char* NAME = "GameTime";
    static constexpr const char* ALIAS = NAME;

    int32_t seconds; // 00
};
RED4EXT_ASSERT_SIZE(GameTime, 0x4);
} // namespace RED4ext
