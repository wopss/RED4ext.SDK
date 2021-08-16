#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior { 
struct AvoidThreatTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorAvoidThreatTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> threatObject; // 38
    Handle<AI::ArgumentMapping> threatRadius; // 48
};
RED4EXT_ASSERT_SIZE(AvoidThreatTaskDefinition, 0x58);
} // namespace AI::behavior
} // namespace RED4ext
