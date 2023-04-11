#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ConditionDefinition; }

namespace AI::behavior
{
struct InstantConditionDefinition : ISerializable
{
    static constexpr const char* NAME = "AIbehaviorInstantConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::ConditionDefinition> condition; // 30
};
RED4EXT_ASSERT_SIZE(InstantConditionDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorInstantConditionDefinition = AI::behavior::InstantConditionDefinition;
} // namespace RED4ext

// clang-format on
