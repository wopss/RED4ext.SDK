#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/PeerID.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace grs
{
struct DeathmatchPlayerGameInfo
{
    static constexpr const char* NAME = "grsDeathmatchPlayerGameInfo";
    static constexpr const char* ALIAS = NAME;

    net::PeerID peerID; // 00
    bool isInGame; // 01
    bool isDead; // 02
    uint8_t unk03[0x8 - 0x3]; // 3
    net::Time spawnTime; // 08
    uint32_t killCount; // 10
    uint32_t deathCount; // 14
    net::PeerID lastShooter; // 18
    uint8_t unk19[0x28 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(DeathmatchPlayerGameInfo, 0x28);
} // namespace grs
using grsDeathmatchPlayerGameInfo = grs::DeathmatchPlayerGameInfo;
} // namespace RED4ext

// clang-format on
