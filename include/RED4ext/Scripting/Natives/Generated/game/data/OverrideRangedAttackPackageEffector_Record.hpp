#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct OverrideRangedAttackPackageEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataOverrideRangedAttackPackageEffector_Record";
    static constexpr const char* ALIAS = "OverrideRangedAttackPackageEffector_Record";

    uint8_t unk88[0x98 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(OverrideRangedAttackPackageEffector_Record, 0x98);
} // namespace game::data
using gamedataOverrideRangedAttackPackageEffector_Record = game::data::OverrideRangedAttackPackageEffector_Record;
using OverrideRangedAttackPackageEffector_Record = game::data::OverrideRangedAttackPackageEffector_Record;
} // namespace RED4ext

// clang-format on
