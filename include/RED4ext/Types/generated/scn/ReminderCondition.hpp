#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/generated/scn/ActorId.hpp>
#include <RED4ext/Types/generated/scn/ChoiceNodeNsReminderParams.hpp>
#include <RED4ext/Types/generated/scn/ReminderConditionProcessStep.hpp>
#include <RED4ext/Types/generated/scn/SceneTime.hpp>

namespace RED4ext
{
namespace scn { 
struct ReminderCondition : ISerializable
{
    static constexpr const char* NAME = "scnReminderCondition";
    static constexpr const char* ALIAS = NAME;

    bool useCustomReminder; // 30
    uint8_t unk31[0x34 - 0x31]; // 31
    scn::ActorId reminderActor; // 34
    scn::SceneTime waitTimeForReminderA; // 38
    scn::SceneTime waitTimeForReminderB; // 3C
    scn::SceneTime waitTimeForReminderC; // 40
    scn::SceneTime waitTimeForLooping; // 44
    scn::SceneTime startTime; // 48
    scn::ReminderConditionProcessStep processStep; // 4C
    bool playing; // 50
    bool running; // 51
    uint8_t unk52[0x54 - 0x52]; // 52
    scn::ChoiceNodeNsReminderParams reminderParams; // 54
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(ReminderCondition, 0x70);
} // namespace scn
} // namespace RED4ext
