#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/loc/VoiceoverContext.hpp>
#include <RED4ext/Types/generated/loc/VoiceoverExpression.hpp>
#include <RED4ext/Types/generated/scn/DialogLineVisualStyle.hpp>

namespace RED4ext
{
namespace quest { 
struct PlayVoiceset_NodeTypeParams
{
    static constexpr const char* NAME = "questPlayVoiceset_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppetRef; // 00
    bool isPlayer; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CName voicesetName; // 40
    bool useVoicesetSystem; // 48
    bool playOnlyGrunt; // 49
    uint8_t unk4A[0x4C - 0x4A]; // 4A
    loc::VoiceoverContext overridingVoiceoverContext; // 4C
    bool overrideVoiceoverExpression; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    loc::VoiceoverExpression overridingVoiceoverExpression; // 54
    bool overrideVisualStyle; // 58
    scn::DialogLineVisualStyle overridingVisualStyle; // 59
    uint8_t unk5A[0x60 - 0x5A]; // 5A
};
RED4EXT_ASSERT_SIZE(PlayVoiceset_NodeTypeParams, 0x60);
} // namespace quest
} // namespace RED4ext
