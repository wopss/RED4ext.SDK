#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct CreateAlertedInfluenceMapTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorCreateAlertedInfluenceMapTaskDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CreateAlertedInfluenceMapTaskDefinition, 0x38);
} // namespace AI::behavior
using AIbehaviorCreateAlertedInfluenceMapTaskDefinition = AI::behavior::CreateAlertedInfluenceMapTaskDefinition;
} // namespace RED4ext

// clang-format on
