#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldPosition.hpp>

namespace RED4ext
{
namespace AI
{
struct NavigationSystemResult
{
    static constexpr const char* NAME = "AINavigationSystemResult";
    static constexpr const char* ALIAS = NAME;

    bool hasFailed; // 00
    bool hasPath; // 01
    bool hasClosestPointOnNavmesh; // 02
    bool hasClosestReachablePoint; // 03
    WorldPosition lastSourcePosition; // 04
    WorldPosition lastTargetPosition; // 10
    WorldPosition adjustedTargetPosition; // 1C
    WorldPosition closestPointOnNavmesh; // 28
    WorldPosition closestReachablePoint; // 34
    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(NavigationSystemResult, 0x48);
} // namespace AI
using AINavigationSystemResult = AI::NavigationSystemResult;
} // namespace RED4ext

// clang-format on
