#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct AmmoData
{
    static constexpr const char* NAME = "gameAmmoData";
    static constexpr const char* ALIAS = "AmmoData";

    ItemID id; // 00
    int32_t available; // 10
    int32_t equipped; // 14
};
RED4EXT_ASSERT_SIZE(AmmoData, 0x18);
} // namespace game
using gameAmmoData = game::AmmoData;
using AmmoData = game::AmmoData;
} // namespace RED4ext

// clang-format on
