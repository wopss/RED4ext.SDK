#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierHandle.hpp>

namespace RED4ext
{
namespace game
{
struct StatModifierGroup
{
    static constexpr const char* NAME = "gameStatModifierGroup";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::StatModifierHandle> statModifierArray; // 00
    int32_t statModifiersLimit; // 10
    TweakDBID statModifiersLimitModifier; // 14
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    DynArray<TweakDBID> relatedModifierGroups; // 20
    TweakDBID statModifierGroupRecordID; // 30
    uint16_t stackCount; // 38
    bool drawBasedOnStatType; // 3A
    bool saveBasedOnStatType; // 3B
    bool optimiseCombinedModifiers; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
};
RED4EXT_ASSERT_SIZE(StatModifierGroup, 0x40);
} // namespace game
using gameStatModifierGroup = game::StatModifierGroup;
} // namespace RED4ext

// clang-format on
