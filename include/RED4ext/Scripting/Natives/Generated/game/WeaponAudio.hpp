#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct WeaponAudio : ISerializable
{
    static constexpr const char* NAME = "gameWeaponAudio";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x130 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(WeaponAudio, 0x130);
} // namespace game
using gameWeaponAudio = game::WeaponAudio;
} // namespace RED4ext

// clang-format on
