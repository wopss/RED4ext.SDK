#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineeventTeleport : red::Event
{
    static constexpr const char* NAME = "gamestateMachineeventTeleport";
    static constexpr const char* ALIAS = "PSMTeleportEvent";

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MachineeventTeleport, 0x60);
} // namespace game::state
using PSMTeleportEvent = game::state::MachineeventTeleport;
} // namespace RED4ext
