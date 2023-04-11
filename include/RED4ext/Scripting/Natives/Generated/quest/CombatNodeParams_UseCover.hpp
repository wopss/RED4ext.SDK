#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CoverExposureMethod.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CombatNodeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct CombatNodeParams_UseCover : quest::CombatNodeParams
{
    static constexpr const char* NAME = "questCombatNodeParams_UseCover";
    static constexpr const char* ALIAS = NAME;

    NodeRef cover; // 40
    bool oneTimeSelection; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    CName forcedEntryAnimation; // 50
    DynArray<AI::CoverExposureMethod> forceStance; // 58
    bool immediately; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(CombatNodeParams_UseCover, 0x70);
} // namespace quest
using questCombatNodeParams_UseCover = quest::CombatNodeParams_UseCover;
} // namespace RED4ext

// clang-format on
