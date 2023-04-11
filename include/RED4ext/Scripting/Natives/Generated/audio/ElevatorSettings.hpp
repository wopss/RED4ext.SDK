#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EntitySettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/LoopingSoundController.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MusicController.hpp>

namespace RED4ext
{
namespace audio
{
struct ElevatorSettings : audio::EntitySettings
{
    static constexpr const char* NAME = "audioElevatorSettings";
    static constexpr const char* ALIAS = NAME;

    audio::MusicController musicEvents; // 88
    audio::LoopingSoundController movementEvents; // A8
    CName callingEvent; // C0
    CName destinationReachedEvent; // C8
    CName panelSelectionEvent; // D0
};
RED4EXT_ASSERT_SIZE(ElevatorSettings, 0xD8);
} // namespace audio
using audioElevatorSettings = audio::ElevatorSettings;
} // namespace RED4ext

// clang-format on
