#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ETimeDilationOverride.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TimeDilation_NodeTypeParam.hpp>

namespace RED4ext
{
namespace quest { struct TimeDilation_Operation; }

namespace quest
{
struct TimeDilation_Player : quest::TimeDilation_NodeTypeParam
{
    static constexpr const char* NAME = "questTimeDilation_Player";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::TimeDilation_Operation> operation; // 30
    quest::ETimeDilationOverride globalTimeDilationOverride; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(TimeDilation_Player, 0x48);
} // namespace quest
using questTimeDilation_Player = quest::TimeDilation_Player;
} // namespace RED4ext

// clang-format on
