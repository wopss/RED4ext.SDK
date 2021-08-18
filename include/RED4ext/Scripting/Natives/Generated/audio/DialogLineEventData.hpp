#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverExpression.hpp>

namespace RED4ext
{
namespace audio { 
struct DialogLineEventData
{
    static constexpr const char* NAME = "audioDialogLineEventData";
    static constexpr const char* ALIAS = NAME;

    CRUID stringId; // 00
    loc::VoiceoverContext context; // 08
    loc::VoiceoverExpression expression; // 0C
    uint8_t unk10[0x14 - 0x10]; // 10
    bool isPlayer; // 14
    bool isRewind; // 15
    bool isHolocall; // 16
    uint8_t unk17[0x18 - 0x17]; // 17
    CName customVoEvent; // 18
    float seekTime; // 20
    float playbackSpeedParameter; // 24
};
RED4EXT_ASSERT_SIZE(DialogLineEventData, 0x28);
} // namespace audio
} // namespace RED4ext
