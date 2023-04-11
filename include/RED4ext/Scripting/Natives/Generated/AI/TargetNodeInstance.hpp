#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ITarget.hpp>

namespace RED4ext
{
namespace AI
{
struct TargetNodeInstance : AI::ITarget
{
    static constexpr const char* NAME = "AITargetNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x18 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(TargetNodeInstance, 0x18);
} // namespace AI
using AITargetNodeInstance = AI::TargetNodeInstance;
} // namespace RED4ext

// clang-format on
