#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace cp { 
struct TimerTest : game::Object
{
    static constexpr const char* NAME = "cpTimerTest";
    static constexpr const char* ALIAS = NAME;

    int32_t counter; // 228
    uint8_t unk22C[0x230 - 0x22C]; // 22C
};
RED4EXT_ASSERT_SIZE(TimerTest, 0x230);
} // namespace cp
} // namespace RED4ext
