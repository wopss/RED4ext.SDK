#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/SnappableNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct PhysicalDestructionNodeInstance : world::SnappableNodeInstance
{
    static constexpr const char* NAME = "worldPhysicalDestructionNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x230 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(PhysicalDestructionNodeInstance, 0x230);
} // namespace world
} // namespace RED4ext
