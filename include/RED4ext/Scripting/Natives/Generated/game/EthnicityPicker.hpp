#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct EthnicityPicker
{
    static constexpr const char* NAME = "gameEthnicityPicker";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x50 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EthnicityPicker, 0x50);
} // namespace game
using gameEthnicityPicker = game::EthnicityPicker;
} // namespace RED4ext

// clang-format on
