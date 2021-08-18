#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct LadderObject : game::Object
{
    static constexpr const char* NAME = "gameLadderObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x234 - 0x230]; // 230
    float heightOfBottomPart; // 234
    float exitStepTop; // 238
    float verticalStepTop; // 23C
    float exitStepBottom; // 240
    float verticalStepBottom; // 244
    float exitStepJump; // 248
    float verticalStepJump; // 24C
    float enterOffset; // 250
    uint8_t unk254[0x258 - 0x254]; // 254
};
RED4EXT_ASSERT_SIZE(LadderObject, 0x258);
} // namespace game
} // namespace RED4ext
