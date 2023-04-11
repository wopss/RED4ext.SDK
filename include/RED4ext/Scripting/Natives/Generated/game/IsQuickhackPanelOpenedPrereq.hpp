#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct IsQuickhackPanelOpenedPrereq
{
    static constexpr const char* NAME = "gameIsQuickhackPanelOpenedPrereq";
    static constexpr const char* ALIAS = "IsQuickhackPanelOpenedPrereq";

    uint8_t unk00[0x40 - 0x0]; // 0
    bool inverted; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(IsQuickhackPanelOpenedPrereq, 0x48);
} // namespace game
using gameIsQuickhackPanelOpenedPrereq = game::IsQuickhackPanelOpenedPrereq;
using IsQuickhackPanelOpenedPrereq = game::IsQuickhackPanelOpenedPrereq;
} // namespace RED4ext

// clang-format on
