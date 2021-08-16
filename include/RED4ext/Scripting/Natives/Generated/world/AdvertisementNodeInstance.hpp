#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StaticMeshNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct AdvertisementNodeInstance : world::StaticMeshNodeInstance
{
    static constexpr const char* NAME = "worldAdvertisementNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x1E0 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(AdvertisementNodeInstance, 0x1E0);
} // namespace world
} // namespace RED4ext
