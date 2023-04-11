#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace world
{
struct EffectNode : world::Node
{
    static constexpr const char* NAME = "worldEffectNode";
    static constexpr const char* ALIAS = NAME;

    RaRef<world::Effect> effect; // 38
    float streamingDistanceOverride; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(EffectNode, 0x48);
} // namespace world
using worldEffectNode = world::EffectNode;
} // namespace RED4ext

// clang-format on
