#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct IsQuickhackPanelOpenedPrereqState
{
    static constexpr const char* NAME = "gameIsQuickhackPanelOpenedPrereqState";
    static constexpr const char* ALIAS = "IsQuickhackPanelOpenedPrereqState";

    uint8_t unk00[0xC8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(IsQuickhackPanelOpenedPrereqState, 0xC8);
} // namespace game
using gameIsQuickhackPanelOpenedPrereqState = game::IsQuickhackPanelOpenedPrereqState;
using IsQuickhackPanelOpenedPrereqState = game::IsQuickhackPanelOpenedPrereqState;
} // namespace RED4ext

// clang-format on
