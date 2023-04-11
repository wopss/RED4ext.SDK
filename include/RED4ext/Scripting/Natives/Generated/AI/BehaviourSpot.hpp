#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SmartSpot.hpp>

namespace RED4ext
{
namespace AI { struct ResourceReference; }

namespace AI
{
struct BehaviourSpot : AI::SmartSpot
{
    static constexpr const char* NAME = "AIBehaviourSpot";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ResourceReference> behaviour; // 30
};
RED4EXT_ASSERT_SIZE(BehaviourSpot, 0x40);
} // namespace AI
using AIBehaviourSpot = AI::BehaviourSpot;
} // namespace RED4ext

// clang-format on
