#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CDistantLightsResource;

namespace world
{
struct DistantLightsNode : world::Node
{
    static constexpr const char* NAME = "worldDistantLightsNode";
    static constexpr const char* ALIAS = NAME;

    RaRef<CDistantLightsResource> data; // 38
};
RED4EXT_ASSERT_SIZE(DistantLightsNode, 0x40);
} // namespace world
using worldDistantLightsNode = world::DistantLightsNode;
} // namespace RED4ext

// clang-format on
