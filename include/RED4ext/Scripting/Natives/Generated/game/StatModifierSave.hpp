#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatsObjectID.hpp>

namespace RED4ext
{
namespace game { struct StatModifierData_Deprecated; }

namespace game
{
struct StatModifierSave
{
    static constexpr const char* NAME = "gameStatModifierSave";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::StatModifierData_Deprecated>> statModifierUnions; // 00
    game::StatsObjectID statsObjectID; // 10
    TweakDBID recordID; // 20
    uint32_t seed; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(StatModifierSave, 0x30);
} // namespace game
using gameStatModifierSave = game::StatModifierSave;
} // namespace RED4ext

// clang-format on
