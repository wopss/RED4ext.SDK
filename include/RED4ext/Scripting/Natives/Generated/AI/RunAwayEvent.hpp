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
struct RunAwayEvent : AI::AIEvent
{
    static constexpr const char* NAME = "AIRunAwayEvent";
    static constexpr const char* ALIAS = "RunAwayEvent";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(RunAwayEvent, 0x60);
} // namespace AI
using AIRunAwayEvent = AI::RunAwayEvent;
using RunAwayEvent = AI::RunAwayEvent;
} // namespace RED4ext

// clang-format on
