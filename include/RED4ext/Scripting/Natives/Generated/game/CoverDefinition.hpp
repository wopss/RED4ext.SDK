#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CoverHeight.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectWorkspotDefinition.hpp>

namespace RED4ext
{
namespace game { 
struct CoverDefinition : game::SmartObjectWorkspotDefinition
{
    static constexpr const char* NAME = "gameCoverDefinition";
    static constexpr const char* ALIAS = NAME;

    bool overrideGeneratedCoverAngles; // 90
    uint8_t unk91[0x94 - 0x91]; // 91
    float overridenCoveringFOVDegrees; // 94
    float overridenCoveringVerticalFOVDegrees; // 98
    float fovExposureDegrees; // 9C
    game::CoverHeight overridenHeight; // A0
    uint8_t unkA4[0xA8 - 0xA4]; // A4
};
RED4EXT_ASSERT_SIZE(CoverDefinition, 0xA8);
} // namespace game
} // namespace RED4ext
