#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/BehaviorBlackboard.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct BehaviorDelegate : AI::behavior::BehaviorBlackboard
{
    static constexpr const char* NAME = "AIbehaviorBehaviorDelegate";
    static constexpr const char* ALIAS = "BehaviorDelegate";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(BehaviorDelegate, 0x48);
} // namespace AI::behavior
using AIbehaviorBehaviorDelegate = AI::behavior::BehaviorDelegate;
using BehaviorDelegate = AI::behavior::BehaviorDelegate;
} // namespace RED4ext

// clang-format on
