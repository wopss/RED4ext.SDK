#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game { 
struct LadderComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameLadderComponent";
    static constexpr const char* ALIAS = NAME;

    float heightOfBottomPart; // 90
    float exitStepTop; // 94
    float verticalStepTop; // 98
    float exitStepBottom; // 9C
    float verticalStepBottom; // A0
    float exitStepJump; // A4
    float verticalStepJump; // A8
    float enterOffset; // AC
};
RED4EXT_ASSERT_SIZE(LadderComponent, 0xB0);
} // namespace game
} // namespace RED4ext
