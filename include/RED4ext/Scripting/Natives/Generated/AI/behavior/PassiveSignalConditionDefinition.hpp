#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/PassiveConditionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct PassiveSignalConditionDefinition : AI::behavior::PassiveConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorPassiveSignalConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    CName tag; // 38
    bool deactivateSignal; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(PassiveSignalConditionDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorPassiveSignalConditionDefinition = AI::behavior::PassiveSignalConditionDefinition;
} // namespace RED4ext

// clang-format on
