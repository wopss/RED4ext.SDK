#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/SItemStackRequirementData.hpp>

namespace RED4ext
{
namespace game { 
struct SItemStack
{
    static constexpr const char* NAME = "gameSItemStack";
    static constexpr const char* ALIAS = "SItemStack";

    ItemID itemID; // 00
    int32_t quantity; // 10
    int32_t powerLevel; // 14
    TweakDBID vendorItemID; // 18
    bool isAvailable; // 20
    uint8_t unk21[0x24 - 0x21]; // 21
    game::SItemStackRequirementData requirement; // 24
};
RED4EXT_ASSERT_SIZE(SItemStack, 0x2C);
} // namespace game
using SItemStack = game::SItemStack;
} // namespace RED4ext
