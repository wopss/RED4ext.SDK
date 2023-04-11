#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneTime.hpp>

namespace RED4ext
{
namespace scn
{
struct ChoiceNodeNsActorReminderParams : ISerializable
{
    static constexpr const char* NAME = "scnChoiceNodeNsActorReminderParams";
    static constexpr const char* ALIAS = NAME;

    bool useCustomReminder; // 30
    uint8_t unk31[0x34 - 0x31]; // 31
    scn::ActorId reminderActor; // 34
    uint8_t unk38[0x58 - 0x38]; // 38
    scn::SceneTime waitTimeForReminderA; // 58
    scn::SceneTime waitTimeForReminderB; // 5C
    scn::SceneTime waitTimeForReminderC; // 60
    scn::SceneTime waitTimeForLooping; // 64
    float waitTimeToCutReminder; // 68
    bool cutReminderEnabled; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsActorReminderParams, 0x70);
} // namespace scn
using scnChoiceNodeNsActorReminderParams = scn::ChoiceNodeNsActorReminderParams;
} // namespace RED4ext

// clang-format on
