#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct MountRequestConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorMountRequestConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x58 - 0x38]; // 38
    bool testMountRequest; // 58
    bool testUnmountRequest; // 59
    bool acceptInstant; // 5A
    bool acceptNotInstant; // 5B
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(MountRequestConditionDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorMountRequestConditionDefinition = AI::behavior::MountRequestConditionDefinition;
} // namespace RED4ext

// clang-format on
