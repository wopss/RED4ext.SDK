#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementParameters.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ParameterizedBehavior; }

namespace AI
{
struct Archetype : CResource
{
    static constexpr const char* NAME = "AIArchetype";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::ParameterizedBehavior> behaviorDefinition; // 40
    StaticArray<move::MovementParameters, 5> movementParameters; // 50
};
RED4EXT_ASSERT_SIZE(Archetype, 0xE0);
} // namespace AI
using AIArchetype = AI::Archetype;
} // namespace RED4ext

// clang-format on
