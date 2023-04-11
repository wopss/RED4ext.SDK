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
struct AndroidTurnOff : red::Event
{
    static constexpr const char* NAME = "gameAndroidTurnOff";
    static constexpr const char* ALIAS = "AndroidTurnOff";

};
RED4EXT_ASSERT_SIZE(AndroidTurnOff, 0x40);
} // namespace game
using gameAndroidTurnOff = game::AndroidTurnOff;
using AndroidTurnOff = game::AndroidTurnOff;
} // namespace RED4ext

// clang-format on
