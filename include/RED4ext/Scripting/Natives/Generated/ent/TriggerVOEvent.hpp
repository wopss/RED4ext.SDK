#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverExpression.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct TriggerVOEvent : red::Event
{
    static constexpr const char* NAME = "entTriggerVOEvent";
    static constexpr const char* ALIAS = NAME;

    CName triggerBaseName; // 40
    uint32_t triggerVariationIndex; // 48
    uint32_t triggerVariationNumber; // 4C
    uint8_t unk50[0x68 - 0x50]; // 50
    CName debugInitialContext; // 68
    uint64_t answeringEntityIDHash; // 70
    bool ignoreGlobalVoLimitCheck; // 78
    loc::VoiceoverContext overridingVoContext; // 79
    loc::VoiceoverExpression overridingVoiceoverExpression; // 7A
    bool overrideVoiceoverExpression; // 7B
    uint8_t overridingVisualStyleValue; // 7C
    bool overrideVisualStyle; // 7D
    uint8_t unk7E[0x80 - 0x7E]; // 7E
};
RED4EXT_ASSERT_SIZE(TriggerVOEvent, 0x80);
} // namespace ent
using entTriggerVOEvent = ent::TriggerVOEvent;
} // namespace RED4ext

// clang-format on
