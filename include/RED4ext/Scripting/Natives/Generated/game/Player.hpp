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

    uint8_t unk00[0xC0 - 0x0]; // 0
    net::PeerID peerID; // C0
    uint8_t unkC1[0xC8 - 0xC1]; // C1
    CString nickname; // C8
};
RED4EXT_ASSERT_SIZE(Player, 0xE8);
} // namespace game
using gamePlayer = game::Player;
} // namespace RED4ext

// clang-format on
