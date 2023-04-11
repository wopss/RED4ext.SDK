#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct AttackComputed : IScriptable
{
    static constexpr const char* NAME = "gameAttackComputed";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AttackComputed, 0x68);
} // namespace game
using gameAttackComputed = game::AttackComputed;
} // namespace RED4ext

// clang-format on
