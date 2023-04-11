#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DebugInfoBase.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct BehaviorDebugInfo : AI::behavior::DebugInfoBase
{
    static constexpr const char* NAME = "AIbehaviorBehaviorDebugInfo";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(BehaviorDebugInfo, 0x70);
} // namespace AI::behavior
using AIbehaviorBehaviorDebugInfo = AI::behavior::BehaviorDebugInfo;
} // namespace RED4ext

// clang-format on
