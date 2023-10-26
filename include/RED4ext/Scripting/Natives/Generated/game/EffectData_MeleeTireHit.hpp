#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) EffectData_MeleeTireHit
{
    static constexpr const char* NAME = "gameEffectData_MeleeTireHit";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x40 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EffectData_MeleeTireHit, 0x40);
} // namespace game
using gameEffectData_MeleeTireHit = game::EffectData_MeleeTireHit;
} // namespace RED4ext

// clang-format on
