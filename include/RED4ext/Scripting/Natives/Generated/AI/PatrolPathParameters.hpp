#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/PatrolContinuationPolicy.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace AI
{
struct PatrolPathParameters : IScriptable
{
    static constexpr const char* NAME = "AIPatrolPathParameters";
    static constexpr const char* ALIAS = NAME;

    NodeRef path; // 40
    move::MovementType movementType; // 48
    AI::PatrolContinuationPolicy continuationPolicy; // 4C
    bool startFromClosestPoint; // 50
    bool patrolWithWeapon; // 51
    bool isBackAndForth; // 52
    bool isInfinite; // 53
    uint32_t numberOfLoops; // 54
    bool sortPatrolPoints; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(PatrolPathParameters, 0x60);
} // namespace AI
using AIPatrolPathParameters = AI::PatrolPathParameters;
} // namespace RED4ext

// clang-format on
