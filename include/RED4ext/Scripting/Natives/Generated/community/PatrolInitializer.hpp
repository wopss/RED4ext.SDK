#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/community/SpawnInitializer.hpp>

namespace RED4ext
{
namespace AI { struct PatrolRole; }

namespace community
{
struct PatrolInitializer : community::SpawnInitializer
{
    static constexpr const char* NAME = "communityPatrolInitializer";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::PatrolRole> patrolRole; // 30
};
RED4EXT_ASSERT_SIZE(PatrolInitializer, 0x40);
} // namespace community
using communityPatrolInitializer = community::PatrolInitializer;
} // namespace RED4ext

// clang-format on
