#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Difficulty.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/LifePath.hpp>

namespace RED4ext
{
namespace save
{
struct GameMetadata
{
    static constexpr const char* NAME = "saveGameMetadata";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    CString gameDefinition; // 08
    CString activeQuests; // 28
    CString trackedQuestEntry; // 48
    CString trackedQuest; // 68
    CString mainQuest; // 88
    CString locationName; // A8
    CString debugString; // C8
    CString initialBuildID; // E8
    CString finishedQuests; // 108
    CString playthroughID; // 128
    CString pointOfNoReturnId; // 148
    CString visitID; // 168
    CString buildSKU; // 188
    CString buildPatch; // 1A8
    Vector3 playerPosition; // 1C8
    uint8_t unk1D4[0x1D8 - 0x1D4]; // 1D4
    double playTime; // 1D8
    double playthroughTime; // 1E0
    uint32_t nextSavableEntityID; // 1E8
    uint32_t nextNonSavableEntityID; // 1EC
    game::data::LifePath lifePath; // 1F0
    uint8_t unk1F4[0x1F8 - 0x1F4]; // 1F4
    CString bodyGender; // 1F8
    CString brainGender; // 218
    game::Difficulty difficulty; // 238
    uint8_t unk23C[0x240 - 0x23C]; // 23C
    DynArray<CString> facts; // 240
    float level; // 250
    float streetCred; // 254
    float gunslinger; // 258
    float assault; // 25C
    float demolition; // 260
    float athletics; // 264
    float brawling; // 268
    float coldBlood; // 26C
    float stealth; // 270
    float engineering; // 274
    float crafting; // 278
    float hacking; // 27C
    float combatHacking; // 280
    float strength; // 284
    float intelligence; // 288
    float reflexes; // 28C
    float technicalAbility; // 290
    float cool; // 294
};
RED4EXT_ASSERT_SIZE(GameMetadata, 0x298);
} // namespace save
using saveGameMetadata = save::GameMetadata;
} // namespace RED4ext

// clang-format on
