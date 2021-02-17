#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace world { 
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
using TrafficLightListenerComponent = world::TrafficLightListenerComponent;
} // namespace RED4ext
