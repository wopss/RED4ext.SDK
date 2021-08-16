#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest { 
struct MultiplayerTeleportPuppetParams
{
    static constexpr const char* NAME = "questMultiplayerTeleportPuppetParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference destinationRef; // 00
    Vector3 destinationOffset; // 38
    uint8_t unk44[0x48 - 0x44]; // 44
    CName spawnPointTag; // 48
    bool teleportAllPlayers; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    game::EntityReference areaNodeTriggerRef; // 58
};
RED4EXT_ASSERT_SIZE(MultiplayerTeleportPuppetParams, 0x90);
} // namespace quest
} // namespace RED4ext
