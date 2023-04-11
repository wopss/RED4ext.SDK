#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/events/PlayerLookAtEventParams.hpp>

namespace RED4ext
{
namespace scn::events
{
struct PlayerLookAtEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsPlayerLookAtEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    NodeRef nodeRef; // 60
    scn::events::PlayerLookAtEventParams lookAtParams; // 68
};
RED4EXT_ASSERT_SIZE(PlayerLookAtEvent, 0x98);
} // namespace scn::events
using scneventsPlayerLookAtEvent = scn::events::PlayerLookAtEvent;
} // namespace RED4ext

// clang-format on
