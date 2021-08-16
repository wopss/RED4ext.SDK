#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Difficulty.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/LifePath.hpp>

namespace RED4ext
{
namespace save { 
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
    float level; // 23C
    float streetCred; // 240
    float gunslinger; // 244
    float assault; // 248
    float demolition; // 24C
    float athletics; // 250
    float brawling; // 254
    float coldBlood; // 258
    float stealth; // 25C
    float engineering; // 260
    float crafting; // 264
    float hacking; // 268
    float combatHacking; // 26C
    float strength; // 270
    float intelligence; // 274
    float reflexes; // 278
    float technicalAbility; // 27C
    float cool; // 280
    uint8_t unk284[0x288 - 0x284]; // 284
};
RED4EXT_ASSERT_SIZE(GameMetadata, 0x288);
} // namespace save
} // namespace RED4ext
