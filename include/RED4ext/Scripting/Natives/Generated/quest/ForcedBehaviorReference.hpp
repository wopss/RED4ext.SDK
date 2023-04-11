#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ResourceReference.hpp>

namespace RED4ext
{
namespace quest
{
struct ForcedBehaviorReference : AI::ResourceReference
{
    static constexpr const char* NAME = "questForcedBehaviorReference";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ForcedBehaviorReference, 0x70);
} // namespace quest
using questForcedBehaviorReference = quest::ForcedBehaviorReference;
} // namespace RED4ext

// clang-format on
