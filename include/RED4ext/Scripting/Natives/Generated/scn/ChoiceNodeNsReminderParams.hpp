#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneTime.hpp>

namespace RED4ext
{
namespace scn
{
struct ChoiceNodeNsReminderParams
{
    static constexpr const char* NAME = "scnChoiceNodeNsReminderParams";
    static constexpr const char* ALIAS = NAME;

    bool reminderEnabled; // 00
    bool useCustomReminder; // 01
    uint8_t unk02[0x4 - 0x2]; // 2
    scn::ActorId reminderActor; // 04
    uint8_t unk08[0x28 - 0x8]; // 8
    scn::SceneTime waitTimeForReminderA; // 28
    scn::SceneTime waitTimeForReminderB; // 2C
    scn::SceneTime waitTimeForReminderC; // 30
    scn::SceneTime waitTimeForLooping; // 34
    uint8_t unk38[0x40 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsReminderParams, 0x40);
} // namespace scn
using scnChoiceNodeNsReminderParams = scn::ChoiceNodeNsReminderParams;
} // namespace RED4ext

// clang-format on
