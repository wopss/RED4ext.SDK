#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace cp
{
struct TimerTest : game::Object
{
    static constexpr const char* NAME = "cpTimerTest";
    static constexpr const char* ALIAS = NAME;

    int32_t counter; // 240
    uint8_t unk244[0x248 - 0x244]; // 244
};
RED4EXT_ASSERT_SIZE(TimerTest, 0x248);
} // namespace cp
using cpTimerTest = cp::TimerTest;
} // namespace RED4ext

// clang-format on
