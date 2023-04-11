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
struct ISoundComponentSubSystem : game::audio::IAudioSubSystem
{
    static constexpr const char* NAME = "gameaudioISoundComponentSubSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ISoundComponentSubSystem, 0x48);
} // namespace game::audio
using gameaudioISoundComponentSubSystem = game::audio::ISoundComponentSubSystem;
} // namespace RED4ext

// clang-format on
