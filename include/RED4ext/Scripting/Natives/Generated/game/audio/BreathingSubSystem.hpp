#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/ISoundComponentSubSystem.hpp>

namespace RED4ext
{
namespace game::audio { 
struct BreathingSubSystem : game::audio::ISoundComponentSubSystem
{
    static constexpr const char* NAME = "gameaudioBreathingSubSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x68 - 0x48]; // 48
    CName metadataName; // 68
    uint8_t unk70[0x78 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(BreathingSubSystem, 0x78);
} // namespace game::audio
} // namespace RED4ext
