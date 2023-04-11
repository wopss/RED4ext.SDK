#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/cp/SplinePlacementProvider_Distance.hpp>

namespace RED4ext
{
namespace cp
{
struct SplinePlacementProvider_Count : cp::SplinePlacementProvider_Distance
{
    static constexpr const char* NAME = "cpSplinePlacementProvider_Count";
    static constexpr const char* ALIAS = NAME;

    uint32_t count; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(SplinePlacementProvider_Count, 0x50);
} // namespace cp
using cpSplinePlacementProvider_Count = cp::SplinePlacementProvider_Count;
} // namespace RED4ext

// clang-format on
