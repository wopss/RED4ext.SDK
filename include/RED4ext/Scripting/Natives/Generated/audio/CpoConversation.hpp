#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoCpoCharacter.hpp>

namespace RED4ext
{
namespace audio
{
struct CpoConversation : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioCpoConversation";
    static constexpr const char* ALIAS = NAME;

    audio::VoCpoCharacter characterOne; // 38
    audio::VoCpoCharacter characterTwo; // 3C
    DynArray<CName> voTriggers; // 40
};
RED4EXT_ASSERT_SIZE(CpoConversation, 0x50);
} // namespace audio
using audioCpoConversation = audio::CpoConversation;
} // namespace RED4ext

// clang-format on
