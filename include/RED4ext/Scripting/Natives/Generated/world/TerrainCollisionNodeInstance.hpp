#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/INodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct TerrainCollisionNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldTerrainCollisionNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xB0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(TerrainCollisionNodeInstance, 0xB0);
} // namespace world
} // namespace RED4ext
