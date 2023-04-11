#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/IPredicateType.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct DistanceFromScreenCenterPredicate : game::interactions::IPredicateType
{
    static constexpr const char* NAME = "gameinteractionsDistanceFromScreenCenterPredicate";
    static constexpr const char* ALIAS = NAME;

    float height; // 30
    float width; // 34
    float curvature; // 38
    float maxPriorityBoundsFactor; // 3C
};
RED4EXT_ASSERT_SIZE(DistanceFromScreenCenterPredicate, 0x40);
} // namespace game::interactions
using gameinteractionsDistanceFromScreenCenterPredicate = game::interactions::DistanceFromScreenCenterPredicate;
} // namespace RED4ext

// clang-format on
