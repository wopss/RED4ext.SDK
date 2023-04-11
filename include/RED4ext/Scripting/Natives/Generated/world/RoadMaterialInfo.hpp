#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/RoadMaterial.hpp>

namespace RED4ext
{
namespace world
{
struct RoadMaterialInfo
{
    static constexpr const char* NAME = "worldRoadMaterialInfo";
    static constexpr const char* ALIAS = NAME;

    float startOffset; // 00
    world::RoadMaterial material; // 04
};
RED4EXT_ASSERT_SIZE(RoadMaterialInfo, 0x8);
} // namespace world
using worldRoadMaterialInfo = world::RoadMaterialInfo;
} // namespace RED4ext

// clang-format on
