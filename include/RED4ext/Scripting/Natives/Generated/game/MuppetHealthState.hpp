#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct MuppetHealthState
{
    static constexpr const char* NAME = "gameMuppetHealthState";
    static constexpr const char* ALIAS = NAME;

    float health; // 00
};
RED4EXT_ASSERT_SIZE(MuppetHealthState, 0x4);
} // namespace game
} // namespace RED4ext
