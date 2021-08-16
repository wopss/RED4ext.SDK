#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/SoundBankStruct.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct AudioLoadingNodeType : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questAudioLoadingNodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::SoundBankStruct> banksToLoad; // 40
    DynArray<audio::SoundBankStruct> banksToUnload; // 50
    bool waitOnLoad; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
    CString description; // 68
};
RED4EXT_ASSERT_SIZE(AudioLoadingNodeType, 0x88);
} // namespace quest
} // namespace RED4ext
