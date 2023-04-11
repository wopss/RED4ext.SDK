#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct ITriggerDestructionComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameITriggerDestructionComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x94 - 0x90]; // 90
    bool startActive; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
};
RED4EXT_ASSERT_SIZE(ITriggerDestructionComponent, 0x98);
} // namespace game
using gameITriggerDestructionComponent = game::ITriggerDestructionComponent;
} // namespace RED4ext

// clang-format on
