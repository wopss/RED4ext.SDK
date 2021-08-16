#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct WeaponFxPackage_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataWeaponFxPackage_Record";
    static constexpr const char* ALIAS = "WeaponFxPackage_Record";

    uint8_t unk48[0x240 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(WeaponFxPackage_Record, 0x240);
} // namespace game::data
using WeaponFxPackage_Record = game::data::WeaponFxPackage_Record;
} // namespace RED4ext
