#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverExpression.hpp>

namespace RED4ext
{
namespace scn
{
struct DialogLineVoParams
{
    static constexpr const char* NAME = "scnDialogLineVoParams";
    static constexpr const char* ALIAS = NAME;

    loc::VoiceoverContext voContext; // 00
    loc::VoiceoverExpression voExpression; // 01
    uint8_t unk02[0x8 - 0x2]; // 2
    CName customVoEvent; // 08
    bool disableHeadMovement; // 10
    bool isHolocallSpeaker; // 11
    bool ignoreSpeakerIncapacitation; // 12
    bool alwaysUseBrainGender; // 13
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(DialogLineVoParams, 0x18);
} // namespace scn
using scnDialogLineVoParams = scn::DialogLineVoParams;
} // namespace RED4ext

// clang-format on
