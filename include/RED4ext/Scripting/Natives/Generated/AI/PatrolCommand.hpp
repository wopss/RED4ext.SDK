#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/MoveCommand.hpp>

namespace RED4ext
{
namespace AI { struct PatrolPathParameters; }

namespace AI
{
struct PatrolCommand : AI::MoveCommand
{
    static constexpr const char* NAME = "AIPatrolCommand";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::PatrolPathParameters> pathParams; // 68
    Handle<AI::PatrolPathParameters> alertedPathParams; // 78
    float alertedRadius; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    DynArray<NodeRef> alertedSpots; // 90
};
RED4EXT_ASSERT_SIZE(PatrolCommand, 0xA0);
} // namespace AI
using AIPatrolCommand = AI::PatrolCommand;
} // namespace RED4ext

// clang-format on
