#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/MovementPolicyTaskFunctions.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ExpressionSocket; }

namespace AI::behavior
{
struct MovementPolicyTaskItemDefinition : ISerializable
{
    static constexpr const char* NAME = "AIbehaviorMovementPolicyTaskItemDefinition";
    static constexpr const char* ALIAS = NAME;

    AI::behavior::MovementPolicyTaskFunctions function; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<Handle<AI::behavior::ExpressionSocket>, 4> params; // 38
};
RED4EXT_ASSERT_SIZE(MovementPolicyTaskItemDefinition, 0x80);
} // namespace AI::behavior
using AIbehaviorMovementPolicyTaskItemDefinition = AI::behavior::MovementPolicyTaskItemDefinition;
} // namespace RED4ext

// clang-format on
