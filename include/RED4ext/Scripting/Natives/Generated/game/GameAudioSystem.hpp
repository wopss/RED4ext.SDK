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
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x200 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GameAudioSystem, 0x200);
} // namespace game
} // namespace RED4ext
