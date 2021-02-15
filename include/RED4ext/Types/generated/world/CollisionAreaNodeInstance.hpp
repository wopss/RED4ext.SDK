#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/AreaShapeNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct CollisionAreaNodeInstance : world::AreaShapeNodeInstance
{
    static constexpr const char* NAME = "worldCollisionAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0xE0 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(CollisionAreaNodeInstance, 0xE0);
} // namespace world
} // namespace RED4ext
