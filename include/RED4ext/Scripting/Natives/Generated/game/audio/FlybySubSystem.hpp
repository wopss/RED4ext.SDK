#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/ISoundComponentSubSystem.hpp>

namespace RED4ext
{
namespace game::audio
{
struct FlybySubSystem : game::audio::ISoundComponentSubSystem
{
    static constexpr const char* NAME = "gameaudioFlybySubSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(FlybySubSystem, 0x48);
} // namespace game::audio
using gameaudioFlybySubSystem = game::audio::FlybySubSystem;
} // namespace RED4ext

// clang-format on
