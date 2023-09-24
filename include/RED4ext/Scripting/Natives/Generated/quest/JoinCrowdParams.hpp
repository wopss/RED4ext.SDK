#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>

namespace RED4ext
{
namespace quest
{
struct JoinCrowdParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questJoinCrowdParams";
    static constexpr const char* ALIAS = NAME;

    bool repeatCommandOnInterrupt; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(JoinCrowdParams, 0x48);
} // namespace quest
using questJoinCrowdParams = quest::JoinCrowdParams;
} // namespace RED4ext

// clang-format on
