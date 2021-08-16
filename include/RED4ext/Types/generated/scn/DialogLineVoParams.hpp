#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/loc/VoiceoverContext.hpp>
#include <RED4ext/Types/generated/loc/VoiceoverExpression.hpp>

namespace RED4ext
{
namespace scn { 
struct DialogLineVoParams
{
    static constexpr const char* NAME = "scnDialogLineVoParams";
    static constexpr const char* ALIAS = NAME;

    loc::VoiceoverContext voContext; // 00
    loc::VoiceoverExpression voExpression; // 04
    CName customVoEvent; // 08
    bool disableHeadMovement; // 10
    bool isHolocallSpeaker; // 11
    bool ignoreSpeakerIncapacitation; // 12
    bool alwaysUseBrainGender; // 13
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(DialogLineVoParams, 0x18);
} // namespace scn
} // namespace RED4ext
