#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct DeactivateTriggerDestructionComponentEvent : red::Event
{
    static constexpr const char* NAME = "gameDeactivateTriggerDestructionComponentEvent";
    static constexpr const char* ALIAS = "DeactivateTriggerDestructionComponentEvent";

};
RED4EXT_ASSERT_SIZE(DeactivateTriggerDestructionComponentEvent, 0x40);
} // namespace game
using gameDeactivateTriggerDestructionComponentEvent = game::DeactivateTriggerDestructionComponentEvent;
using DeactivateTriggerDestructionComponentEvent = game::DeactivateTriggerDestructionComponentEvent;
} // namespace RED4ext

// clang-format on
