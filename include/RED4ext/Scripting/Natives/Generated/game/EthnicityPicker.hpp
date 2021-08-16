#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct EthnicityPicker
{
    static constexpr const char* NAME = "gameEthnicityPicker";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x40 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EthnicityPicker, 0x40);
} // namespace game
} // namespace RED4ext
