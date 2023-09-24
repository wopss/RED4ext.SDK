#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct WeakspotPhysicalDestructionProperties
{
    static constexpr const char* NAME = "gameWeakspotPhysicalDestructionProperties";
    static constexpr const char* ALIAS = "WeakspotPhysicalDestructionProperties";

    float velocity; // 00
};
RED4EXT_ASSERT_SIZE(WeakspotPhysicalDestructionProperties, 0x4);
} // namespace game
using gameWeakspotPhysicalDestructionProperties = game::WeakspotPhysicalDestructionProperties;
using WeakspotPhysicalDestructionProperties = game::WeakspotPhysicalDestructionProperties;
} // namespace RED4ext

// clang-format on
