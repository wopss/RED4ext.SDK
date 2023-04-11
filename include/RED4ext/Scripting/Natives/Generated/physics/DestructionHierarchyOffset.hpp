#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace physics
{
struct DestructionHierarchyOffset
{
    static constexpr const char* NAME = "physicsDestructionHierarchyOffset";
    static constexpr const char* ALIAS = NAME;

    uint32_t combined; // 00
};
RED4EXT_ASSERT_SIZE(DestructionHierarchyOffset, 0x4);
} // namespace physics
using physicsDestructionHierarchyOffset = physics::DestructionHierarchyOffset;
} // namespace RED4ext

// clang-format on
