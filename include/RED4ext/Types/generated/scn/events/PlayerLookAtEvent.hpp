#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/scn/PerformerId.hpp>
#include <RED4ext/Types/generated/scn/SceneEvent.hpp>
#include <RED4ext/Types/generated/scn/events/PlayerLookAtEventParams.hpp>

namespace RED4ext
{
namespace scn::events { 
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
} // namespace RED4ext
