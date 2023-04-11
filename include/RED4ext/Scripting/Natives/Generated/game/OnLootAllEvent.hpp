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
struct OnLootAllEvent : red::Event
{
    static constexpr const char* NAME = "gameOnLootAllEvent";
    static constexpr const char* ALIAS = "OnLootAllEvent";

};
RED4EXT_ASSERT_SIZE(OnLootAllEvent, 0x40);
} // namespace game
using gameOnLootAllEvent = game::OnLootAllEvent;
using OnLootAllEvent = game::OnLootAllEvent;
} // namespace RED4ext

// clang-format on
