#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace net
{
struct PeerID
{
    static constexpr const char* NAME = "netPeerID";
    static constexpr const char* ALIAS = NAME;

    uint8_t value; // 00
};
RED4EXT_ASSERT_SIZE(PeerID, 0x1);
} // namespace net
using netPeerID = net::PeerID;
} // namespace RED4ext

// clang-format on
