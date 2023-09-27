#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CoverHeight.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectWorkspotDefinition.hpp>

namespace RED4ext
{
namespace game
{
struct CoverDefinition : game::SmartObjectWorkspotDefinition
{
    static constexpr const char* NAME = "gameCoverDefinition";
    static constexpr const char* ALIAS = NAME;

    bool overrideGeneratedCoverAngles; // 98
    uint8_t unk99[0x9C - 0x99]; // 99
    float overridenCoveringFOVDegrees; // 9C
    float overridenCoveringVerticalFOVDegrees; // A0
    float fovExposureDegrees; // A4
    game::CoverHeight overridenHeight; // A8
    uint8_t unkAC[0xB0 - 0xAC]; // AC
};
RED4EXT_ASSERT_SIZE(CoverDefinition, 0xB0);
} // namespace game
using gameCoverDefinition = game::CoverDefinition;
} // namespace RED4ext

// clang-format on
