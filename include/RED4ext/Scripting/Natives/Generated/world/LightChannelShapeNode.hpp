#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GeometryShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct LightChannelShapeNode : world::GeometryShapeNode
{
    static constexpr const char* NAME = "worldLightChannelShapeNode";
    static constexpr const char* ALIAS = NAME;

    rend::LightChannel channels; // 50
    uint8_t unk52[0x54 - 0x52]; // 52
    float streamingDistanceFactor; // 54
};
RED4EXT_ASSERT_SIZE(LightChannelShapeNode, 0x58);
} // namespace world
using worldLightChannelShapeNode = world::LightChannelShapeNode;
} // namespace RED4ext

// clang-format on
