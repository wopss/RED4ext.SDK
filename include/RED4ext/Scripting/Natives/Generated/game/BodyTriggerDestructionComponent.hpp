#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ITriggerDestructionComponent.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game
{
struct __declspec(align(0x10)) BodyTriggerDestructionComponent : game::ITriggerDestructionComponent
{
    static constexpr const char* NAME = "gameBodyTriggerDestructionComponent";
    static constexpr const char* ALIAS = NAME;

    CName colliderComponentName; // 98
    Handle<physics::FilterData> filterData; // A0
    float impulseForce; // B0
    float impulseRadius; // B4
    uint8_t unkB8[0x120 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(BodyTriggerDestructionComponent, 0x120);
} // namespace game
using gameBodyTriggerDestructionComponent = game::BodyTriggerDestructionComponent;
} // namespace RED4ext

// clang-format on
