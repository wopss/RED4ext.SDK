#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameplayTier.hpp>

namespace RED4ext
{
namespace game
{
struct SceneTierData : IScriptable
{
    static constexpr const char* NAME = "gameSceneTierData";
    static constexpr const char* ALIAS = "SceneTierData";

    GameplayTier tier; // 40
    bool emptyHands; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
    CString userDebugInfo; // 48
};
RED4EXT_ASSERT_SIZE(SceneTierData, 0x68);
} // namespace game
using gameSceneTierData = game::SceneTierData;
using SceneTierData = game::SceneTierData;
} // namespace RED4ext

// clang-format on
