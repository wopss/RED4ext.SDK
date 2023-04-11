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
struct CrowdEntityReuseEvent : red::Event
{
    static constexpr const char* NAME = "gameCrowdEntityReuseEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CrowdEntityReuseEvent, 0x40);
} // namespace game
using gameCrowdEntityReuseEvent = game::CrowdEntityReuseEvent;
} // namespace RED4ext

// clang-format on
