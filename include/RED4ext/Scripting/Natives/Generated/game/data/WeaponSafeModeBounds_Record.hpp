#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct WeaponSafeModeBounds_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataWeaponSafeModeBounds_Record";
    static constexpr const char* ALIAS = "WeaponSafeModeBounds_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(WeaponSafeModeBounds_Record, 0x70);
} // namespace game::data
using gamedataWeaponSafeModeBounds_Record = game::data::WeaponSafeModeBounds_Record;
using WeaponSafeModeBounds_Record = game::data::WeaponSafeModeBounds_Record;
} // namespace RED4ext

// clang-format on
