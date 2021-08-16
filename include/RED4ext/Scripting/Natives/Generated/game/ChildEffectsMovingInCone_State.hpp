#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct ChildEffectsMovingInCone_State
{
    static constexpr const char* NAME = "gameChildEffectsMovingInCone_State";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xA0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ChildEffectsMovingInCone_State, 0xA0);
} // namespace game
} // namespace RED4ext
