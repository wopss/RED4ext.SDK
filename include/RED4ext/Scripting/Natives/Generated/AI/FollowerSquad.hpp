#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SquadBase.hpp>

namespace RED4ext
{
namespace AI
{
struct FollowerSquad : AI::SquadBase
{
    static constexpr const char* NAME = "AIFollowerSquad";
    static constexpr const char* ALIAS = "FollowerSquad";

    uint8_t unk148[0x1A0 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(FollowerSquad, 0x1A0);
} // namespace AI
using AIFollowerSquad = AI::FollowerSquad;
using FollowerSquad = AI::FollowerSquad;
} // namespace RED4ext

// clang-format on
