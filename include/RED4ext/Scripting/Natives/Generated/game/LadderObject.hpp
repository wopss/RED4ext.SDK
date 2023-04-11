#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct LadderObject : game::Object
{
    static constexpr const char* NAME = "gameLadderObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x244 - 0x240]; // 240
    float heightOfBottomPart; // 244
    float exitStepTop; // 248
    float verticalStepTop; // 24C
    float exitStepBottom; // 250
    float verticalStepBottom; // 254
    float exitStepJump; // 258
    float verticalStepJump; // 25C
    float enterOffset; // 260
    uint8_t unk264[0x268 - 0x264]; // 264
};
RED4EXT_ASSERT_SIZE(LadderObject, 0x268);
} // namespace game
using gameLadderObject = game::LadderObject;
} // namespace RED4ext

// clang-format on
