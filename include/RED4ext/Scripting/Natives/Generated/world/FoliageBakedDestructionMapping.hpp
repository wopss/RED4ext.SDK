#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/FoliageDestructionMapping.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }
namespace world { struct Effect; }

namespace world
{
struct FoliageBakedDestructionMapping : world::FoliageDestructionMapping
{
    static constexpr const char* NAME = "worldFoliageBakedDestructionMapping";
    static constexpr const char* ALIAS = NAME;

    RaRef<world::Effect> destructionEffect; // 68
    Handle<physics::FilterData> filterData; // 70
    physics::FilterDataSource filterDataSource; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
    CName audioMetadata; // 88
    float numFrames; // 90
    float frameRate; // 94
};
RED4EXT_ASSERT_SIZE(FoliageBakedDestructionMapping, 0x98);
} // namespace world
using worldFoliageBakedDestructionMapping = world::FoliageBakedDestructionMapping;
} // namespace RED4ext

// clang-format on
