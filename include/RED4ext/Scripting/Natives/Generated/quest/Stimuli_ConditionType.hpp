#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StimType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISensesConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Stimuli_ConditionType : quest::ISensesConditionType
{
    static constexpr const char* NAME = "questStimuli_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference instigatorRef; // 38
    bool isPlayerInstigator; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
    game::EntityReference targetRef; // 78
    game::data::StimType type; // B0
    uint8_t unkB4[0xC0 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(Stimuli_ConditionType, 0xC0);
} // namespace quest
using questStimuli_ConditionType = quest::Stimuli_ConditionType;
} // namespace RED4ext

// clang-format on
