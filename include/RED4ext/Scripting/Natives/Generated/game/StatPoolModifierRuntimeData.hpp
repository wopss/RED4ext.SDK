#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatPoolModifier.hpp>

namespace RED4ext
{
namespace game
{
struct StatPoolModifierRuntimeData
{
    static constexpr const char* NAME = "gameStatPoolModifierRuntimeData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    game::StatPoolModifier modifier; // 10
    float modificationDelay; // 90
    bool inRange; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
    TweakDBID recordID; // 98
};
RED4EXT_ASSERT_SIZE(StatPoolModifierRuntimeData, 0xA0);
} // namespace game
using gameStatPoolModifierRuntimeData = game::StatPoolModifierRuntimeData;
} // namespace RED4ext

// clang-format on
