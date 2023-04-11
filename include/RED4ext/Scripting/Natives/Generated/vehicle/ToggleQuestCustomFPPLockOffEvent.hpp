#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct ToggleQuestCustomFPPLockOffEvent : red::Event
{
    static constexpr const char* NAME = "vehicleToggleQuestCustomFPPLockOffEvent";
    static constexpr const char* ALIAS = "ToggleQuestCustomFPPLockOffEvent";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ToggleQuestCustomFPPLockOffEvent, 0x48);
} // namespace vehicle
using vehicleToggleQuestCustomFPPLockOffEvent = vehicle::ToggleQuestCustomFPPLockOffEvent;
using ToggleQuestCustomFPPLockOffEvent = vehicle::ToggleQuestCustomFPPLockOffEvent;
} // namespace RED4ext

// clang-format on
