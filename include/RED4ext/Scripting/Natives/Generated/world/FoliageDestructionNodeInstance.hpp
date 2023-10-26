#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CollisionNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) FoliageDestructionNodeInstance : world::CollisionNodeInstance
{
    static constexpr const char* NAME = "worldFoliageDestructionNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(FoliageDestructionNodeInstance, 0xA0);
} // namespace world
using worldFoliageDestructionNodeInstance = world::FoliageDestructionNodeInstance;
} // namespace RED4ext

// clang-format on
