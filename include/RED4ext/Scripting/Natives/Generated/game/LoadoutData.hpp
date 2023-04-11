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
struct LoadoutData
{
    static constexpr const char* NAME = "gameLoadoutData";
    static constexpr const char* ALIAS = "LoadoutData";

    ItemID itemID; // 00
    TweakDBID slotID; // 10
};
RED4EXT_ASSERT_SIZE(LoadoutData, 0x18);
} // namespace game
using gameLoadoutData = game::LoadoutData;
using LoadoutData = game::LoadoutData;
} // namespace RED4ext

// clang-format on
