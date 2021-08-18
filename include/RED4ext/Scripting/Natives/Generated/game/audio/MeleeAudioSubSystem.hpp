#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/IWeaponAudioComponentSubSystem.hpp>

namespace RED4ext
{
namespace game::audio { 
struct MeleeAudioSubSystem : game::audio::IWeaponAudioComponentSubSystem
{
    static constexpr const char* NAME = "gameaudioMeleeAudioSubSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk70[0x98 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(MeleeAudioSubSystem, 0x98);
} // namespace game::audio
} // namespace RED4ext
