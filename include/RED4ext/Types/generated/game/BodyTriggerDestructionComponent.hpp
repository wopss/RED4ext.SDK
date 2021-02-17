#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game { 
struct BodyTriggerDestructionComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameBodyTriggerDestructionComponent";
    static constexpr const char* ALIAS = NAME;

    CName colliderComponentName; // 90
    Handle<physics::FilterData> filterData; // 98
    float impulseForce; // A8
    float impulseRadius; // AC
    uint8_t unkB0[0x110 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(BodyTriggerDestructionComponent, 0x110);
} // namespace game
} // namespace RED4ext
