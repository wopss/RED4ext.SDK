#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/scn/ActorId.hpp>
#include <RED4ext/Types/generated/scn/SceneTime.hpp>

namespace RED4ext
{
namespace scn { 
struct ChoiceNodeNsReminderParams
{
    static constexpr const char* NAME = "scnChoiceNodeNsReminderParams";
    static constexpr const char* ALIAS = NAME;

    bool reminderEnabled; // 00
    bool useCustomReminder; // 01
    uint8_t unk02[0x4 - 0x2]; // 2
    scn::ActorId reminderActor; // 04
    scn::SceneTime waitTimeForReminderA; // 08
    scn::SceneTime waitTimeForReminderB; // 0C
    scn::SceneTime waitTimeForReminderC; // 10
    scn::SceneTime waitTimeForLooping; // 14
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsReminderParams, 0x18);
} // namespace scn
} // namespace RED4ext
