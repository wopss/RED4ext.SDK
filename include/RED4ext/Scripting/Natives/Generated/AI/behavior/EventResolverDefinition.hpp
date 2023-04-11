#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct EventResolverDefinition : ISerializable
{
    static constexpr const char* NAME = "AIbehaviorEventResolverDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EventResolverDefinition, 0x30);
} // namespace AI::behavior
using AIbehaviorEventResolverDefinition = AI::behavior::EventResolverDefinition;
} // namespace RED4ext

// clang-format on
