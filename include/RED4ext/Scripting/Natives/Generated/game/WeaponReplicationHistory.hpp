#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ReplicatedContinuousAttack.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ReplicatedShotData.hpp>

namespace RED4ext
{
namespace game
{
struct WeaponReplicationHistory
{
    static constexpr const char* NAME = "gameWeaponReplicationHistory";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
    TweakDBID weaponSlot; // 18
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<game::ReplicatedShotData, 8> shots; // 20
    uint32_t latestShotId; // 1A8
    uint8_t unk1AC[0x1B0 - 0x1AC]; // 1AC
    game::ReplicatedContinuousAttack continuousAttack; // 1B0
    uint8_t unk1C8[0x1D0 - 0x1C8]; // 1C8
};
RED4EXT_ASSERT_SIZE(WeaponReplicationHistory, 0x1D0);
} // namespace game
using gameWeaponReplicationHistory = game::WeaponReplicationHistory;
} // namespace RED4ext

// clang-format on
