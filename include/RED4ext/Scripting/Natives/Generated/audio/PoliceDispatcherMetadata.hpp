#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct PoliceDispatcherMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioPoliceDispatcherMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> regularInputs; // 38
    DynArray<CName> playerChaseStartInputs; // 48
    DynArray<CName> playerChaseBackupNeededInputs; // 58
    DynArray<CName> playerChaseEndInputs; // 68
    float dispatcherTimeInterval; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    CString sceneFilePath; // 80
    uint8_t unkA0[0xA8 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(PoliceDispatcherMetadata, 0xA8);
} // namespace audio
using audioPoliceDispatcherMetadata = audio::PoliceDispatcherMetadata;
} // namespace RED4ext

// clang-format on
