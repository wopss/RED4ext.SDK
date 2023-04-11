#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficSpotDefinition.hpp>

namespace RED4ext
{
namespace work { struct WorkspotResource; }

namespace AI
{
struct TrafficWorkspotDefinition : world::TrafficSpotDefinition
{
    static constexpr const char* NAME = "AITrafficWorkspotDefinition";
    static constexpr const char* ALIAS = NAME;

    Ref<work::WorkspotResource> workspotResource; // 48
};
RED4EXT_ASSERT_SIZE(TrafficWorkspotDefinition, 0x60);
} // namespace AI
using AITrafficWorkspotDefinition = AI::TrafficWorkspotDefinition;
} // namespace RED4ext

// clang-format on
