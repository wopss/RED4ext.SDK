#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentOverrideWrapper.hpp>

namespace RED4ext
{
namespace AI::behavior { struct Resource; }

namespace AI::behavior
{
struct ParameterizedBehavior : ISerializable
{
    static constexpr const char* NAME = "AIbehaviorParameterizedBehavior";
    static constexpr const char* ALIAS = NAME;

    Ref<AI::behavior::Resource> treeDefinition; // 30
    uint8_t unk48[0x58 - 0x48]; // 48
    DynArray<AI::ArgumentOverrideWrapper> argumentsOverrides; // 58
};
RED4EXT_ASSERT_SIZE(ParameterizedBehavior, 0x68);
} // namespace AI::behavior
using AIbehaviorParameterizedBehavior = AI::behavior::ParameterizedBehavior;
} // namespace RED4ext

// clang-format on
