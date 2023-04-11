#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct AndroidTurnOn : red::Event
{
    static constexpr const char* NAME = "gameAndroidTurnOn";
    static constexpr const char* ALIAS = "AndroidTurnOn";

};
RED4EXT_ASSERT_SIZE(AndroidTurnOn, 0x40);
} // namespace game
using gameAndroidTurnOn = game::AndroidTurnOn;
using AndroidTurnOn = game::AndroidTurnOn;
} // namespace RED4ext

// clang-format on
