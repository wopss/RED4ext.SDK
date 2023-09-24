#pragma once

// clang-format off

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
namespace game
{
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
    uint8_t unk188[0x198 - 0x188]; // 188
    float maxValue; // 198
    float customLimitValue; // 19C
    float currentValue; // 1A0
    float bonus; // 1A4
    float modificationDelay; // 1A8
    game::StatPoolDataValueChangeMode changeMode; // 1AC
    game::StatPoolDataBonusType bonusType; // 1AD
    game::StatPoolDataStatPoolModificationStatus modificationStatus; // 1AE
    uint8_t unk1AF[0x1B0 - 0x1AF]; // 1AF
};
RED4EXT_ASSERT_SIZE(StatPoolData, 0x1B0);
} // namespace game
using gameStatPoolData = game::StatPoolData;
} // namespace RED4ext

// clang-format on
