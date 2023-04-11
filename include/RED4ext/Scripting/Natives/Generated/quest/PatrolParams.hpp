#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>

namespace RED4ext
{
namespace AI { struct PatrolPathParameters; }

namespace quest
{
struct PatrolParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questPatrolParams";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::PatrolPathParameters> pathParams; // 40
    bool repeatCommandOnInterrupt; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(PatrolParams, 0x58);
} // namespace quest
using questPatrolParams = quest::PatrolParams;
} // namespace RED4ext

// clang-format on
