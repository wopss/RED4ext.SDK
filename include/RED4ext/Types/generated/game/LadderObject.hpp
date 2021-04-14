#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct LadderObject : game::Object
{
    static constexpr const char* NAME = "gameLadderObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk228[0x22C - 0x228]; // 228
    float heightOfBottomPart; // 22C
    float exitStepTop; // 230
    float verticalStepTop; // 234
    float exitStepBottom; // 238
    float verticalStepBottom; // 23C
    float exitStepJump; // 240
    float verticalStepJump; // 244
    float enterOffset; // 248
    uint8_t unk24C[0x250 - 0x24C]; // 24C
};
RED4EXT_ASSERT_SIZE(LadderObject, 0x250);
} // namespace game
} // namespace RED4ext
