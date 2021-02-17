#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/net/Time.hpp>

namespace RED4ext
{
namespace game { 
struct MuppetInputStates
{
    static constexpr const char* NAME = "gameMuppetInputStates";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    net::Time replicationTime; // 10
    uint8_t unk18[0x20 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(MuppetInputStates, 0x20);
} // namespace game
} // namespace RED4ext
