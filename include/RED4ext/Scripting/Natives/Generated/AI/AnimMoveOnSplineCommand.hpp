#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/MoveCommand.hpp>

namespace RED4ext
{
namespace AI
{
struct AnimMoveOnSplineCommand : AI::MoveCommand
{
    static constexpr const char* NAME = "AIAnimMoveOnSplineCommand";
    static constexpr const char* ALIAS = NAME;

    NodeRef spline; // 68
    bool useStart; // 70
    bool useStop; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
    CName controllerSetupName; // 78
    float blendTime; // 80
    float globalInBlendTime; // 84
    float globalOutBlendTime; // 88
    bool turnCharacterToMatchVelocity; // 8C
    uint8_t unk8D[0x90 - 0x8D]; // 8D
    CName customStartAnimationName; // 90
    CName customMainAnimationName; // 98
    CName customStopAnimationName; // A0
    bool startSnapToTerrain; // A8
    bool mainSnapToTerrain; // A9
    bool stopSnapToTerrain; // AA
    uint8_t unkAB[0xAC - 0xAB]; // AB
    float startSnapToTerrainBlendTime; // AC
    float stopSnapToTerrainBlendTime; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(AnimMoveOnSplineCommand, 0xB8);
} // namespace AI
using AIAnimMoveOnSplineCommand = AI::AnimMoveOnSplineCommand;
} // namespace RED4ext

// clang-format on
