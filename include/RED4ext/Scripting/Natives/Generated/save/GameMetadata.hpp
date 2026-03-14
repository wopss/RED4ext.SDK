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
    String gameDefinition; // 08
    String activeQuests; // 28
    String trackedQuestEntry; // 48
    String trackedQuest; // 68
    String mainQuest; // 88
    String locationName; // A8
    String debugString; // C8
    String initialBuildID; // E8
    String finishedQuests; // 108
    String playthroughID; // 128
    String pointOfNoReturnId; // 148
    String visitID; // 168
    String buildSKU; // 188
    String buildPatch; // 1A8
    Vector3 playerPosition; // 1C8
    uint8_t unk1D4[0x1D8 - 0x1D4]; // 1D4
    double playTime; // 1D8
    double playthroughTime; // 1E0
    uint32_t nextSavableEntityID; // 1E8
    uint32_t nextNonSavableEntityID; // 1EC
    game::data::LifePath lifePath; // 1F0
    uint8_t unk1F4[0x1F8 - 0x1F4]; // 1F4
    String bodyGender; // 1F8
    String brainGender; // 218
    game::Difficulty difficulty; // 238
    uint8_t unk23C[0x240 - 0x23C]; // 23C
    DynArray<String> facts; // 240
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
