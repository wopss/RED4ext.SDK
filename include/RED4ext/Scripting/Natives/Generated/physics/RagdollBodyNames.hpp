#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace physics
{
struct RagdollBodyNames
{
    static constexpr const char* NAME = "physicsRagdollBodyNames";
    static constexpr const char* ALIAS = NAME;

    CName ParentAnimName; // 00
    CName ChildAnimName; // 08
};
RED4EXT_ASSERT_SIZE(RagdollBodyNames, 0x10);
} // namespace physics
using physicsRagdollBodyNames = physics::RagdollBodyNames;
} // namespace RED4ext

// clang-format on
