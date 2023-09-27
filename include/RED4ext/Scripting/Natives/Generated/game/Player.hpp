#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/PeerID.hpp>

namespace RED4ext
{
namespace game
{
struct Player
{
    static constexpr const char* NAME = "gamePlayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x50 - 0x0]; // 0
    net::PeerID peerID; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    CString nickname; // 58
};
RED4EXT_ASSERT_SIZE(Player, 0x78);
} // namespace game
using gamePlayer = game::Player;
} // namespace RED4ext

// clang-format on
