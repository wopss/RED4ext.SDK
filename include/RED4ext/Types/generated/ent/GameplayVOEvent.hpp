#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/ent/EntityID.hpp>
#include <RED4ext/Types/generated/loc/VoiceoverContext.hpp>
#include <RED4ext/Types/generated/loc/VoiceoverExpression.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct GameplayVOEvent : red::Event
{
    static constexpr const char* NAME = "entGameplayVOEvent";
    static constexpr const char* ALIAS = "SoundPlayVo";

    CName voContext; // 40
    bool isQuest; // 48
    uint8_t unk49[0x4A - 0x49]; // 49
    bool ignoreFrustumCheck; // 4A
    bool ignoreDistanceCheck; // 4B
    bool ignoreGlobalVoLimitCheck; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    CName debugInitialContext; // 50
    ent::EntityID answeringEntityId; // 58
    loc::VoiceoverContext overridingVoiceoverContext; // 60
    loc::VoiceoverExpression overridingVoiceoverExpression; // 64
    bool overrideVoiceoverExpression; // 68
    uint8_t overridingVisualStyleValue; // 69
    bool overrideVisualStyle; // 6A
    uint8_t unk6B[0x70 - 0x6B]; // 6B
};
RED4EXT_ASSERT_SIZE(GameplayVOEvent, 0x70);
} // namespace ent
using SoundPlayVo = ent::GameplayVOEvent;
} // namespace RED4ext
