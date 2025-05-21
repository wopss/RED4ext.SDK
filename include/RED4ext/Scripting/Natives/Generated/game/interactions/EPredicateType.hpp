#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::interactions {
enum class EPredicateType : int32_t
{
    EPredicateFunction_true = 0,
    EPredicateFunction_distanceFromScreenCentre = 1,
    EPredicateFunction_containedInShapes = 2,
    EPredicateFunction_onScreenTest = 3,
    EPredicateFunction_visibleTarget = 4,
    EPredicateFunction_lookAt = 5,
    EPredicateFunction_lookAtComponent = 6,
    EPredicateFunction_logicalLookAt = 7,
    EPredicateFunction_obstructedLookAt = 8,
    EPredicateFunction_lineOfSight = EPredicateFunction_visibleTarget,
};
} // namespace game::interactions
using gameinteractionsEPredicateType = game::interactions::EPredicateType;
} // namespace RED4ext

// clang-format on
