#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/community/TimePeriod.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CrowdCreationDataMergeMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CrowdEntryType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CrowdTemplateCharacterData.hpp>

namespace RED4ext
{
namespace game
{
struct CrowdPhaseTimePeriod : community::TimePeriod
{
    static constexpr const char* NAME = "gameCrowdPhaseTimePeriod";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::CrowdTemplateCharacterData> charactersData; // 10
    DynArray<game::CrowdTemplateCharacterData> reducedCharactersData; // 20
    uint8_t unk30[0x34 - 0x30]; // 30
    float density; // 34
    CName Density; // 38
    float workspotsUsage; // 40
    game::CrowdCreationDataMergeMode mergeMode; // 44
    game::CrowdEntryType crowdType; // 45
    bool useDensityPreset; // 46
    uint8_t unk47[0x48 - 0x47]; // 47
};
RED4EXT_ASSERT_SIZE(CrowdPhaseTimePeriod, 0x48);
} // namespace game
using gameCrowdPhaseTimePeriod = game::CrowdPhaseTimePeriod;
} // namespace RED4ext

// clang-format on
