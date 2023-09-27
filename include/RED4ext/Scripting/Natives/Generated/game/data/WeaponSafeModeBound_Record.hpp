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
struct WeaponSafeModeBound_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataWeaponSafeModeBound_Record";
    static constexpr const char* ALIAS = "WeaponSafeModeBound_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(WeaponSafeModeBound_Record, 0x78);
} // namespace game::data
using gamedataWeaponSafeModeBound_Record = game::data::WeaponSafeModeBound_Record;
using WeaponSafeModeBound_Record = game::data::WeaponSafeModeBound_Record;
} // namespace RED4ext

// clang-format on
