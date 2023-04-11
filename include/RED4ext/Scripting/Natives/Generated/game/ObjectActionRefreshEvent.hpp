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
struct ObjectActionRefreshEvent : red::Event
{
    static constexpr const char* NAME = "gameObjectActionRefreshEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ObjectActionRefreshEvent, 0x40);
} // namespace game
using gameObjectActionRefreshEvent = game::ObjectActionRefreshEvent;
} // namespace RED4ext

// clang-format on
