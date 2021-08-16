#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace AI { 
struct PatrolPathParameters : IScriptable
{
    static constexpr const char* NAME = "AIPatrolPathParameters";
    static constexpr const char* ALIAS = NAME;

    NodeRef path; // 40
    move::MovementType movementType; // 48
    bool patrolWithWeapon; // 4C
    bool enterClosest; // 4D
    bool isBackAndForth; // 4E
    bool isInfinite; // 4F
    uint32_t numberOfLoops; // 50
    bool sortPatrolPoints; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
};
RED4EXT_ASSERT_SIZE(PatrolPathParameters, 0x58);
} // namespace AI
} // namespace RED4ext
