#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ConditionDefinition; }

namespace AI::behavior
{
struct EventConditionDefinition : ISerializable
{
    static constexpr const char* NAME = "AIbehaviorEventConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::ConditionDefinition> condition; // 30
    CName eventName; // 40
};
RED4EXT_ASSERT_SIZE(EventConditionDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorEventConditionDefinition = AI::behavior::EventConditionDefinition;
} // namespace RED4ext

// clang-format on
