#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game::data { struct MiniGame_AllSymbols_Record; }
namespace game::data { struct MiniGame_Trap_Record; }
namespace game::ui { struct MinigameGenerationRule; }

namespace game::ui
{
struct MinigameData
{
    static constexpr const char* NAME = "gameuiMinigameData";
    static constexpr const char* ALIAS = "MinigameData";

    float timeLimit; // 00
    float trapSpawnProbability; // 04
    uint32_t gridSize; // 08
    uint32_t bufferSize; // 0C
    bool timerWaitsForInteraction; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
    DynArray<Handle<game::ui::MinigameGenerationRule>> rules; // 18
    DynArray<Handle<game::data::MiniGame_Trap_Record>> acceptableTraps; // 28
    Handle<game::data::MiniGame_AllSymbols_Record> symbolsToUse; // 38
};
RED4EXT_ASSERT_SIZE(MinigameData, 0x48);
} // namespace game::ui
using gameuiMinigameData = game::ui::MinigameData;
using MinigameData = game::ui::MinigameData;
} // namespace RED4ext

// clang-format on
