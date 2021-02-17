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

    float heightOfBottomPart; // 230
    float exitStepTop; // 234
    float verticalStepTop; // 238
    float exitStepBottom; // 23C
    float verticalStepBottom; // 240
    float exitStepJump; // 244
    float verticalStepJump; // 248
    float enterOffset; // 24C
};
RED4EXT_ASSERT_SIZE(LadderObject, 0x250);
} // namespace game
} // namespace RED4ext
