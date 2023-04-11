#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CrowdPhaseTimePeriod.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CrowdTemplateCharacterData.hpp>

namespace RED4ext
{
namespace game
{
struct CrowdTemplateEntryPhase
{
    static constexpr const char* NAME = "gameCrowdTemplateEntryPhase";
    static constexpr const char* ALIAS = NAME;

    CName phaseName; // 00
    DynArray<game::CrowdPhaseTimePeriod> timePeriods; // 08
    DynArray<game::CrowdTemplateCharacterData> charactersData; // 18
    float density; // 28
    bool legacy; // 2C
    bool legacyDensityInTimePeriods; // 2D
    bool legacyCharactersData; // 2E
    uint8_t unk2F[0x30 - 0x2F]; // 2F
};
RED4EXT_ASSERT_SIZE(CrowdTemplateEntryPhase, 0x30);
} // namespace game
using gameCrowdTemplateEntryPhase = game::CrowdTemplateEntryPhase;
} // namespace RED4ext

// clang-format on
