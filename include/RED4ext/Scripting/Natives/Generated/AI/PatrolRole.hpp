#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/Role.hpp>

namespace RED4ext
{
namespace AI
{
struct PatrolRole : AI::Role
{
    static constexpr const char* NAME = "AIPatrolRole";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PatrolRole, 0x40);
} // namespace AI
using AIPatrolRole = AI::PatrolRole;
} // namespace RED4ext

// clang-format on
