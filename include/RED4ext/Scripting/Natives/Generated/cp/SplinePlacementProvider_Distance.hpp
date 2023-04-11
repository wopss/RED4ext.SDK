#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/cp/SplinePlacementProvider.hpp>

namespace RED4ext
{
namespace cp
{
struct SplinePlacementProvider_Distance : cp::SplinePlacementProvider
{
    static constexpr const char* NAME = "cpSplinePlacementProvider_Distance";
    static constexpr const char* ALIAS = NAME;

    float distance; // 38
    uint8_t unk3C[0x48 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(SplinePlacementProvider_Distance, 0x48);
} // namespace cp
using cpSplinePlacementProvider_Distance = cp::SplinePlacementProvider_Distance;
} // namespace RED4ext

// clang-format on
