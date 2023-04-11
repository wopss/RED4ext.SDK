#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SItemStackRequirementData.hpp>

namespace RED4ext
{
namespace game
{
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
    uint8_t unk2C[0x30 - 0x2C]; // 2C
    DynArray<CName> dynamicTags; // 30
};
RED4EXT_ASSERT_SIZE(SItemStack, 0x40);
} // namespace game
using gameSItemStack = game::SItemStack;
using SItemStack = game::SItemStack;
} // namespace RED4ext

// clang-format on
