#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace game
{
struct ReplicatedContinuousAttack
{
    static constexpr const char* NAME = "gameReplicatedContinuousAttack";
    static constexpr const char* ALIAS = NAME;

    net::Time startTimeStamp; // 00
    net::Time stopTimeStamp; // 08
    TweakDBID attackId; // 10
};
RED4EXT_ASSERT_SIZE(ReplicatedContinuousAttack, 0x18);
} // namespace game
using gameReplicatedContinuousAttack = game::ReplicatedContinuousAttack;
} // namespace RED4ext

// clang-format on
