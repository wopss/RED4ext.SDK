#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverExpression.hpp>

namespace RED4ext
{
namespace audio
{
struct DialogLineEventData
{
    static constexpr const char* NAME = "audioDialogLineEventData";
    static constexpr const char* ALIAS = NAME;

    CRUID stringId; // 00
    loc::VoiceoverContext context; // 08
    loc::VoiceoverExpression expression; // 09
    uint8_t unk0A[0x10 - 0xA]; // A
    bool isPlayer; // 10
    bool isRewind; // 11
    bool isHolocall; // 12
    uint8_t unk13[0x18 - 0x13]; // 13
    CName customVoEvent; // 18
    float seekTime; // 20
    float playbackSpeedParameter; // 24
};
RED4EXT_ASSERT_SIZE(DialogLineEventData, 0x28);
} // namespace audio
using audioDialogLineEventData = audio::DialogLineEventData;
} // namespace RED4ext

// clang-format on
