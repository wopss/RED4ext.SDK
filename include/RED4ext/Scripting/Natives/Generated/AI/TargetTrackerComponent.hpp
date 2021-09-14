#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace AI { 
struct TargetTrackerComponent : game::Component
{
    static constexpr const char* NAME = "AITargetTrackerComponent";
    static constexpr const char* ALIAS = "TargetTrackerComponent";

    uint8_t unkA8[0x17D - 0xA8]; // A8
    bool TriggersCombat; // 17D
    uint8_t unk17E[0x210 - 0x17E]; // 17E
};
RED4EXT_ASSERT_SIZE(TargetTrackerComponent, 0x210);
} // namespace AI
using TargetTrackerComponent = AI::TargetTrackerComponent;
} // namespace RED4ext
