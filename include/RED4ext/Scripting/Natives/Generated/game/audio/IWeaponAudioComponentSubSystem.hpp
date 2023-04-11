#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/IAudioSubSystem.hpp>

namespace RED4ext
{
namespace game::audio
{
struct IWeaponAudioComponentSubSystem : game::audio::IAudioSubSystem
{
    static constexpr const char* NAME = "gameaudioIWeaponAudioComponentSubSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(IWeaponAudioComponentSubSystem, 0x70);
} // namespace game::audio
using gameaudioIWeaponAudioComponentSubSystem = game::audio::IWeaponAudioComponentSubSystem;
} // namespace RED4ext

// clang-format on
