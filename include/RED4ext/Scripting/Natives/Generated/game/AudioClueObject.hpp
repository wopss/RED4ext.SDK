#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct AudioClueObject : game::Object
{
    static constexpr const char* NAME = "gameAudioClueObject";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AudioClueObject, 0x240);
} // namespace game
using gameAudioClueObject = game::AudioClueObject;
} // namespace RED4ext

// clang-format on
