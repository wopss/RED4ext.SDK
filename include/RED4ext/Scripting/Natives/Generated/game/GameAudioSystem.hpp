#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameAudioSystem.hpp>

namespace RED4ext
{
namespace game { 
struct GameAudioSystem : game::IGameAudioSystem
{
    static constexpr const char* NAME = "gameGameAudioSystem";
    static constexpr const char* ALIAS = "AudioSystem";

    uint8_t unk48[0x3E0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GameAudioSystem, 0x3E0);
} // namespace game
using AudioSystem = game::GameAudioSystem;
} // namespace RED4ext
