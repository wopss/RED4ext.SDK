#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverExpression.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
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
    loc::VoiceoverExpression overridingVoiceoverExpression; // 61
    bool overrideVoiceoverExpression; // 62
    uint8_t overridingVisualStyleValue; // 63
    bool overrideVisualStyle; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
};
RED4EXT_ASSERT_SIZE(GameplayVOEvent, 0x68);
} // namespace ent
using entGameplayVOEvent = ent::GameplayVOEvent;
using SoundPlayVo = ent::GameplayVOEvent;
} // namespace RED4ext

// clang-format on
