#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DamageType.hpp>

namespace RED4ext
{
namespace game
{
struct Damage : IScriptable
{
    static constexpr const char* NAME = "gameDamage";
    static constexpr const char* ALIAS = "Damage";

    game::data::DamageType damageType; // 40
    float value; // 44
};
RED4EXT_ASSERT_SIZE(Damage, 0x48);
} // namespace game
using gameDamage = game::Damage;
using Damage = game::Damage;
} // namespace RED4ext

// clang-format on
