#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct Dive : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsDive";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Dive, 0x40);
} // namespace game::audio::events
using gameaudioeventsDive = game::audio::events::Dive;
} // namespace RED4ext

// clang-format on
