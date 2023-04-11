#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsReminderParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ReminderConditionProcessStep.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneTime.hpp>

namespace RED4ext
{
namespace scn
{
struct ReminderCondition : ISerializable
{
    static constexpr const char* NAME = "scnReminderCondition";
    static constexpr const char* ALIAS = NAME;

    scn::ActorId reminderActor; // 30
    uint8_t unk34[0x58 - 0x34]; // 34
    scn::SceneTime waitTimeForReminderA; // 58
    scn::SceneTime waitTimeForReminderB; // 5C
    scn::SceneTime waitTimeForReminderC; // 60
    scn::SceneTime waitTimeForLooping; // 64
    scn::SceneTime startTime; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    scn::ReminderConditionProcessStep processStep; // 70
    bool useCustomReminder; // 74
    uint8_t unk75[0x76 - 0x75]; // 75
    bool playing; // 76
    bool running; // 77
    scn::ChoiceNodeNsReminderParams reminderParams; // 78
};
RED4EXT_ASSERT_SIZE(ReminderCondition, 0xB8);
} // namespace scn
using scnReminderCondition = scn::ReminderCondition;
} // namespace RED4ext

// clang-format on
