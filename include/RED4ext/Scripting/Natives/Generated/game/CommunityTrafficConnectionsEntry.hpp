#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct CommunityTrafficConnectionsEntry
{
    static constexpr const char* NAME = "gameCommunityTrafficConnectionsEntry";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x1 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(CommunityTrafficConnectionsEntry, 0x1);
} // namespace game
using gameCommunityTrafficConnectionsEntry = game::CommunityTrafficConnectionsEntry;
} // namespace RED4ext

// clang-format on
