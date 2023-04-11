#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficLightListenerComponent : ent::IComponent
{
    static constexpr const char* NAME = "worldTrafficLightListenerComponent";
    static constexpr const char* ALIAS = "TrafficLightListenerComponent";

    uint8_t unk90[0xA8 - 0x90]; // 90
    NodeRef intersectionRef; // A8
    uint32_t groupIdx; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(TrafficLightListenerComponent, 0xB8);
} // namespace world
using worldTrafficLightListenerComponent = world::TrafficLightListenerComponent;
using TrafficLightListenerComponent = world::TrafficLightListenerComponent;
} // namespace RED4ext

// clang-format on
