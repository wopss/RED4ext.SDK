#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameAudioSystem.hpp>

namespace RED4ext
{
namespace game
{
struct GameAudioSystem : game::IGameAudioSystem
{
    static constexpr const char* NAME = "gameGameAudioSystem";
    static constexpr const char* ALIAS = "AudioSystem";

    uint8_t unk48[0x420 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GameAudioSystem, 0x420);
} // namespace game
using gameGameAudioSystem = game::GameAudioSystem;
using AudioSystem = game::GameAudioSystem;
} // namespace RED4ext

// clang-format on
