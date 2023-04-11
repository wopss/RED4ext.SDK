#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/EEnvColorGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct StaticFogVolumeNode : world::Node
{
    static constexpr const char* NAME = "worldStaticFogVolumeNode";
    static constexpr const char* ALIAS = NAME;

    float blendFalloff; // 38
    float densityFalloff; // 3C
    float densityFactor; // 40
    float streamingDistance; // 44
    float ambientScale; // 48
    float absorption; // 4C
    Color color; // 50
    uint8_t priority; // 54
    bool absolute; // 55
    bool applyHeightFalloff; // 56
    EEnvColorGroup envColorGroup; // 57
    rend::LightChannel lightChannels; // 58
    uint8_t unk5A[0x60 - 0x5A]; // 5A
};
RED4EXT_ASSERT_SIZE(StaticFogVolumeNode, 0x60);
} // namespace world
using worldStaticFogVolumeNode = world::StaticFogVolumeNode;
} // namespace RED4ext

// clang-format on
