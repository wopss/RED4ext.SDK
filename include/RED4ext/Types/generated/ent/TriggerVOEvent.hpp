#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/loc/VoiceoverContext.hpp>
#include <RED4ext/Types/generated/loc/VoiceoverExpression.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
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
    uint8_t unk79[0x7C - 0x79]; // 79
    loc::VoiceoverContext overridingVoContext; // 7C
    loc::VoiceoverExpression overridingVoiceoverExpression; // 80
    bool overrideVoiceoverExpression; // 84
    uint8_t overridingVisualStyleValue; // 85
    bool overrideVisualStyle; // 86
    uint8_t unk87[0x88 - 0x87]; // 87
};
RED4EXT_ASSERT_SIZE(TriggerVOEvent, 0x88);
} // namespace ent
} // namespace RED4ext
