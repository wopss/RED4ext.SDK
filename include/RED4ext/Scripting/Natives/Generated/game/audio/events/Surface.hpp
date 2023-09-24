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
struct Surface : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsSurface";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Surface, 0x40);
} // namespace game::audio::events
using gameaudioeventsSurface = game::audio::events::Surface;
} // namespace RED4ext

// clang-format on
