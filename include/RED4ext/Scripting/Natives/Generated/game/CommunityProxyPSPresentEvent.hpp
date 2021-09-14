#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct CommunityProxyPSPresentEvent : red::Event
{
    static constexpr const char* NAME = "gameCommunityProxyPSPresentEvent";
    static constexpr const char* ALIAS = "CommunityProxyPSPresentEvent";

};
RED4EXT_ASSERT_SIZE(CommunityProxyPSPresentEvent, 0x40);
} // namespace game
using CommunityProxyPSPresentEvent = game::CommunityProxyPSPresentEvent;
} // namespace RED4ext
