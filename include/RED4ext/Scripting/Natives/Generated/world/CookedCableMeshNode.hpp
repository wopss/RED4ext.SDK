#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedBendedMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct CookedCableMeshNode : world::CookedBendedMeshNode
{
    static constexpr const char* NAME = "worldCookedCableMeshNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CookedCableMeshNode, 0x78);
} // namespace world
using worldCookedCableMeshNode = world::CookedCableMeshNode;
} // namespace RED4ext

// clang-format on
