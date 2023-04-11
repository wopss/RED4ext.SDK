#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace work
{
struct ConnectedWorkspotNotificationEvent : red::Event
{
    static constexpr const char* NAME = "workConnectedWorkspotNotificationEvent";
    static constexpr const char* ALIAS = "ConnectedWorkspotNotificationEvent";

    CName evtName; // 40
};
RED4EXT_ASSERT_SIZE(ConnectedWorkspotNotificationEvent, 0x48);
} // namespace work
using workConnectedWorkspotNotificationEvent = work::ConnectedWorkspotNotificationEvent;
using ConnectedWorkspotNotificationEvent = work::ConnectedWorkspotNotificationEvent;
} // namespace RED4ext

// clang-format on
