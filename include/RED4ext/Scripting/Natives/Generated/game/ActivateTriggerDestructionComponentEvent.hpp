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
struct ActivateTriggerDestructionComponentEvent : red::Event
{
    static constexpr const char* NAME = "gameActivateTriggerDestructionComponentEvent";
    static constexpr const char* ALIAS = "ActivateTriggerDestructionComponentEvent";

};
RED4EXT_ASSERT_SIZE(ActivateTriggerDestructionComponentEvent, 0x40);
} // namespace game
using gameActivateTriggerDestructionComponentEvent = game::ActivateTriggerDestructionComponentEvent;
using ActivateTriggerDestructionComponentEvent = game::ActivateTriggerDestructionComponentEvent;
} // namespace RED4ext

// clang-format on
