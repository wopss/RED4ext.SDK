#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace AI
{
struct JoinTrafficEvent : AI::AIEvent
{
    static constexpr const char* NAME = "AIJoinTrafficEvent";
    static constexpr const char* ALIAS = "JoinTrafficEvent";

    uint8_t unk50[0x100 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(JoinTrafficEvent, 0x100);
} // namespace AI
using AIJoinTrafficEvent = AI::JoinTrafficEvent;
using JoinTrafficEvent = AI::JoinTrafficEvent;
} // namespace RED4ext

// clang-format on
