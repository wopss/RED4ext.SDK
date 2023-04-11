#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ProficiencyType.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct TelemetryLevelGained
{
    static constexpr const char* NAME = "gameTelemetryLevelGained";
    static constexpr const char* ALIAS = "TelemetryLevelGained";

    WeakHandle<game::Object> playerPuppet; // 00
    game::data::ProficiencyType proficiencyType; // 10
    int32_t proficiencyValue; // 14
    int32_t perkPointsAwarded; // 18
    int32_t attributePointsAwarded; // 1C
    bool isDebugEvt; // 20
    uint8_t unk21[0x28 - 0x21]; // 21
};
RED4EXT_ASSERT_SIZE(TelemetryLevelGained, 0x28);
} // namespace game
using gameTelemetryLevelGained = game::TelemetryLevelGained;
using TelemetryLevelGained = game::TelemetryLevelGained;
} // namespace RED4ext

// clang-format on
