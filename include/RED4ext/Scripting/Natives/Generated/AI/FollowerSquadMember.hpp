#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SquadNPCMember.hpp>

namespace RED4ext
{
namespace AI
{
struct FollowerSquadMember : AI::SquadNPCMember
{
    static constexpr const char* NAME = "AIFollowerSquadMember";
    static constexpr const char* ALIAS = "FollowerSquadMember";

    uint8_t unk90[0x98 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(FollowerSquadMember, 0x98);
} // namespace AI
using AIFollowerSquadMember = AI::FollowerSquadMember;
using FollowerSquadMember = AI::FollowerSquadMember;
} // namespace RED4ext

// clang-format on
