#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }
namespace world { struct Effect; }

namespace physics
{
struct DestructionLevelData
{
    static constexpr const char* NAME = "physicsDestructionLevelData";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::FilterData> filterData; // 00
    RaRef<world::Effect> fracturingEffect; // 10
};
RED4EXT_ASSERT_SIZE(DestructionLevelData, 0x18);
} // namespace physics
using physicsDestructionLevelData = physics::DestructionLevelData;
} // namespace RED4ext

// clang-format on
