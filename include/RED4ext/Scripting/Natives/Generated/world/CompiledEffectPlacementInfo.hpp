#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct CompiledEffectPlacementInfo
{
    static constexpr const char* NAME = "worldCompiledEffectPlacementInfo";
    static constexpr const char* ALIAS = NAME;

    uint8_t placementTagIndex; // 00
    uint8_t relativePositionIndex; // 01
    uint8_t relativeRotationIndex; // 02
    uint8_t flags; // 03
};
RED4EXT_ASSERT_SIZE(CompiledEffectPlacementInfo, 0x4);
} // namespace world
using worldCompiledEffectPlacementInfo = world::CompiledEffectPlacementInfo;
} // namespace RED4ext

// clang-format on
