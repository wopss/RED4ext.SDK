#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace AI { 
struct TargetTrackerComponent : ent::IComponent
{
    static constexpr const char* NAME = "AITargetTrackerComponent";
    static constexpr const char* ALIAS = "TargetTrackerComponent";

    uint8_t unk90[0x165 - 0x90]; // 90
    bool TriggersCombat; // 165
    uint8_t unk166[0x1F0 - 0x166]; // 166
};
RED4EXT_ASSERT_SIZE(TargetTrackerComponent, 0x1F0);
} // namespace AI
using TargetTrackerComponent = AI::TargetTrackerComponent;
} // namespace RED4ext
