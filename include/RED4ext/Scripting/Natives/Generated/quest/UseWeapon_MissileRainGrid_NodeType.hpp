#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/EUseWeapon_MissileOffsetsSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/UseWeapon_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct UseWeapon_MissileRainGrid_NodeType : quest::UseWeapon_NodeType
{
    static constexpr const char* NAME = "questUseWeapon_MissileRainGrid_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector3> missileOffsets; // 60
    DynArray<game::EntityReference> targetRefs; // 70
    quest::EUseWeapon_MissileOffsetsSource source; // 80
    TweakDBID recordID; // 84
    uint8_t unk8C[0x90 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(UseWeapon_MissileRainGrid_NodeType, 0x90);
} // namespace quest
using questUseWeapon_MissileRainGrid_NodeType = quest::UseWeapon_MissileRainGrid_NodeType;
} // namespace RED4ext

// clang-format on
