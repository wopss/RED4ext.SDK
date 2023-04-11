#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct LadderComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameLadderComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x94 - 0x90]; // 90
    float heightOfBottomPart; // 94
    float exitStepTop; // 98
    float verticalStepTop; // 9C
    float exitStepBottom; // A0
    float verticalStepBottom; // A4
    float exitStepJump; // A8
    float verticalStepJump; // AC
    float enterOffset; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(LadderComponent, 0xB8);
} // namespace game
using gameLadderComponent = game::LadderComponent;
} // namespace RED4ext

// clang-format on
