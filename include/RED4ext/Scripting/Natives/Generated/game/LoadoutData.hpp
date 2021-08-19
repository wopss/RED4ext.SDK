#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { 
struct LoadoutData
{
    static constexpr const char* NAME = "gameLoadoutData";
    static constexpr const char* ALIAS = NAME;

    ItemID itemID; // 00
    TweakDBID slotID; // 10
};
RED4EXT_ASSERT_SIZE(LoadoutData, 0x18);
} // namespace game
} // namespace RED4ext
