#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AutoFoliageMappingItem.hpp>

namespace RED4ext
{
namespace world
{
struct AutoFoliageMapping : CResource
{
    static constexpr const char* NAME = "worldAutoFoliageMapping";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::AutoFoliageMappingItem> Items; // 40
};
RED4EXT_ASSERT_SIZE(AutoFoliageMapping, 0x50);
} // namespace world
using worldAutoFoliageMapping = world::AutoFoliageMapping;
} // namespace RED4ext

// clang-format on
