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

    float heightOfBottomPart; // 228
    float exitStepTop; // 22C
    float verticalStepTop; // 230
    float exitStepBottom; // 234
    float verticalStepBottom; // 238
    float exitStepJump; // 23C
    float verticalStepJump; // 240
    float enterOffset; // 244
};
RED4EXT_ASSERT_SIZE(LadderObject, 0x248);
} // namespace game
} // namespace RED4ext
