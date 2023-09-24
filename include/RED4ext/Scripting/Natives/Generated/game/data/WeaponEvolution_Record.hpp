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
struct WeaponEvolution_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataWeaponEvolution_Record";
    static constexpr const char* ALIAS = "WeaponEvolution_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(WeaponEvolution_Record, 0x58);
} // namespace game::data
using gamedataWeaponEvolution_Record = game::data::WeaponEvolution_Record;
using WeaponEvolution_Record = game::data::WeaponEvolution_Record;
} // namespace RED4ext

// clang-format on
