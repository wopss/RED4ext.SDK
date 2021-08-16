#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world { 
struct LightChannelVolumeNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldLightChannelVolumeNode";
    static constexpr const char* ALIAS = NAME;

    rend::LightChannel channels; // 60
    uint8_t unk62[0x64 - 0x62]; // 62
    float streamingDistanceFactor; // 64
};
RED4EXT_ASSERT_SIZE(LightChannelVolumeNode, 0x68);
} // namespace world
} // namespace RED4ext
