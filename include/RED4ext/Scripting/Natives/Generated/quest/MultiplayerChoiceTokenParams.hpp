#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace quest
{
struct MultiplayerChoiceTokenParams
{
    static constexpr const char* NAME = "questMultiplayerChoiceTokenParams";
    static constexpr const char* ALIAS = NAME;

    uint32_t timeout; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName compatibleDeviceName; // 08
};
RED4EXT_ASSERT_SIZE(MultiplayerChoiceTokenParams, 0x10);
} // namespace quest
using questMultiplayerChoiceTokenParams = quest::MultiplayerChoiceTokenParams;
} // namespace RED4ext

// clang-format on
