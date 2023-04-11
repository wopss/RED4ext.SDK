#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world { struct FoliageBrush; }

namespace world
{
struct AutoFoliageMappingItem
{
    static constexpr const char* NAME = "worldAutoFoliageMappingItem";
    static constexpr const char* ALIAS = NAME;

    CName Material; // 00
    uint32_t LayerIndex; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    RaRef<world::FoliageBrush> FoliageBrush; // 10
};
RED4EXT_ASSERT_SIZE(AutoFoliageMappingItem, 0x18);
} // namespace world
using worldAutoFoliageMappingItem = world::AutoFoliageMappingItem;
} // namespace RED4ext

// clang-format on
