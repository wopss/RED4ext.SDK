#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PersistentID.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct PSDeviceChangedEvent : red::Event
{
    static constexpr const char* NAME = "gamePSDeviceChangedEvent";
    static constexpr const char* ALIAS = "PSDeviceChangedEvent";

    game::PersistentID persistentID; // 40
    CName className; // 50
};
RED4EXT_ASSERT_SIZE(PSDeviceChangedEvent, 0x58);
} // namespace game
using gamePSDeviceChangedEvent = game::PSDeviceChangedEvent;
using PSDeviceChangedEvent = game::PSDeviceChangedEvent;
} // namespace RED4ext

// clang-format on
