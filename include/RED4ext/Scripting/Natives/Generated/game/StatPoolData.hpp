#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatPoolDataBonusType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatPoolDataStatPoolModificationStatus.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatPoolDataValueChangeMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatPoolModifier.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatsObjectID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatPoolType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game { 
struct StatPoolData
{
    static constexpr const char* NAME = "gameStatPoolData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x2C - 0x0]; // 0
    game::data::StatType stat; // 2C
    game::data::StatPoolType type; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    game::StatsObjectID ownerID; // 38
    uint8_t unk48[0x60 - 0x48]; // 48
    TweakDBID recordID; // 60
    uint8_t unk68[0x78 - 0x68]; // 68
    NativeArray<game::StatPoolModifier, 2> modifiers; // 78
    NativeArray<TweakDBID, 2> alternativeModifierRecords; // 178
    float maxValue; // 188
    float customLimitValue; // 18C
    float currentValue; // 190
    float bonus; // 194
    float modificationDelay; // 198
    game::StatPoolDataValueChangeMode changeMode; // 19C
    game::StatPoolDataBonusType bonusType; // 19D
    game::StatPoolDataStatPoolModificationStatus modificationStatus; // 19E
    uint8_t unk19F[0x1A0 - 0x19F]; // 19F
};
RED4EXT_ASSERT_SIZE(StatPoolData, 0x1A0);
} // namespace game
} // namespace RED4ext
