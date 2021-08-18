#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace world { 
struct DecorationMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldDecorationMeshNode";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::FilterData> filterData; // 58
    physics::FilterDataSource filterDataSource; // 68
    bool startAsleep; // 69
    uint8_t unk6A[0x70 - 0x6A]; // 6A
};
RED4EXT_ASSERT_SIZE(DecorationMeshNode, 0x70);
} // namespace world
} // namespace RED4ext
