#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverExpression.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/DialogLineVisualStyle.hpp>

namespace RED4ext
{
namespace quest
{
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
    loc::VoiceoverContext overridingVoiceoverContext; // 4A
    bool overrideVoiceoverExpression; // 4B
    loc::VoiceoverExpression overridingVoiceoverExpression; // 4C
    bool overrideVisualStyle; // 4D
    scn::DialogLineVisualStyle overridingVisualStyle; // 4E
    uint8_t unk4F[0x50 - 0x4F]; // 4F
};
RED4EXT_ASSERT_SIZE(PlayVoiceset_NodeTypeParams, 0x50);
} // namespace quest
using questPlayVoiceset_NodeTypeParams = quest::PlayVoiceset_NodeTypeParams;
} // namespace RED4ext

// clang-format on
