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

    uint8_t unk00[0x28 - 0x0]; // 0
    net::PeerID peerID; // 28
    uint8_t unk29[0x30 - 0x29]; // 29
    CString nickname; // 30
};
RED4EXT_ASSERT_SIZE(Player, 0x50);
} // namespace game
} // namespace RED4ext
