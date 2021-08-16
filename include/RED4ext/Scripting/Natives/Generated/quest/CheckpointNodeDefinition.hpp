#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { 
struct CheckpointNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questCheckpointNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    bool saveLock; // 48
    bool ignoreSaveLocks; // 49
    bool pointOfNoReturn; // 4A
    bool endGameSave; // 4B
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    DynArray<TweakDBID> additionalEndGameRewardsTweak; // 50
    CString debugString; // 60
};
RED4EXT_ASSERT_SIZE(CheckpointNodeDefinition, 0x80);
} // namespace quest
} // namespace RED4ext
