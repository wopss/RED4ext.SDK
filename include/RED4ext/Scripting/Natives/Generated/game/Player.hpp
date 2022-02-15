#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/PeerID.hpp>

namespace RED4ext
{
namespace game { 
struct Player
{
    static constexpr const char* NAME = "gamePlayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
    net::PeerID peerID; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    CString nickname; // 38
};
RED4EXT_ASSERT_SIZE(Player, 0x58);
} // namespace game
} // namespace RED4ext
