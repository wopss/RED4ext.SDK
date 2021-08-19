#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameplayTier.hpp>

namespace RED4ext
{
namespace game { 
struct SceneTierData : IScriptable
{
    static constexpr const char* NAME = "gameSceneTierData";
    static constexpr const char* ALIAS = NAME;

    GameplayTier tier; // 40
    bool emptyHands; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(SceneTierData, 0x48);
} // namespace game
} // namespace RED4ext
