#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DamageType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatPoolType.hpp>

namespace RED4ext
{
namespace game::damage
{
struct DamageDebugData : IScriptable
{
    static constexpr const char* NAME = "gamedamageDamageDebugData";
    static constexpr const char* ALIAS = "DamageDebugData";

    game::data::StatPoolType statPoolType; // 40
    game::data::DamageType damageType; // 44
    float value; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(DamageDebugData, 0x50);
} // namespace game::damage
using gamedamageDamageDebugData = game::damage::DamageDebugData;
using DamageDebugData = game::damage::DamageDebugData;
} // namespace RED4ext

// clang-format on
