#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/INodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct FoliageNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldFoliageNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x130 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(FoliageNodeInstance, 0x130);
} // namespace world
} // namespace RED4ext
