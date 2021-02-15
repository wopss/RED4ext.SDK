#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/physics/FilterDataSource.hpp>
#include <RED4ext/Types/generated/world/FoliageDestructionMapping.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }
namespace world { struct Effect; }

namespace world { 
struct FoliageBakedDestructionMapping : world::FoliageDestructionMapping
{
    static constexpr const char* NAME = "worldFoliageBakedDestructionMapping";
    static constexpr const char* ALIAS = NAME;

    RaRef<world::Effect> destructionEffect; // 60
    Handle<physics::FilterData> filterData; // 68
    physics::FilterDataSource filterDataSource; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    CName audioMetadata; // 80
    float numFrames; // 88
    float frameRate; // 8C
};
RED4EXT_ASSERT_SIZE(FoliageBakedDestructionMapping, 0x90);
} // namespace world
} // namespace RED4ext
