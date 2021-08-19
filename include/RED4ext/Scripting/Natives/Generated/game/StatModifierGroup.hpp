#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierHandle.hpp>

namespace RED4ext
{
namespace game { 
struct StatModifierGroup
{
    static constexpr const char* NAME = "gameStatModifierGroup";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::StatModifierHandle> statModifierArray; // 00
    int32_t statModifiersLimit; // 10
    TweakDBID statModifiersLimitModifier; // 14
    uint8_t unk1C[0x1E - 0x1C]; // 1C
    bool drawBasedOnStatType; // 1E
    uint8_t unk1F[0x20 - 0x1F]; // 1F
};
RED4EXT_ASSERT_SIZE(StatModifierGroup, 0x20);
} // namespace game
} // namespace RED4ext
