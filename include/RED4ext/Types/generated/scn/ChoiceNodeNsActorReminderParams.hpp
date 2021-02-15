#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/generated/scn/ActorId.hpp>
#include <RED4ext/Types/generated/scn/SceneTime.hpp>

namespace RED4ext
{
namespace scn { 
struct ChoiceNodeNsActorReminderParams : ISerializable
{
    static constexpr const char* NAME = "scnChoiceNodeNsActorReminderParams";
    static constexpr const char* ALIAS = NAME;

    bool useCustomReminder; // 30
    uint8_t unk31[0x34 - 0x31]; // 31
    scn::ActorId reminderActor; // 34
    scn::SceneTime waitTimeForReminderA; // 38
    scn::SceneTime waitTimeForReminderB; // 3C
    scn::SceneTime waitTimeForReminderC; // 40
    scn::SceneTime waitTimeForLooping; // 44
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsActorReminderParams, 0x48);
} // namespace scn
} // namespace RED4ext
