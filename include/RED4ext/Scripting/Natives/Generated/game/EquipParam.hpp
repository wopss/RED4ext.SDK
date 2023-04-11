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
struct EquipParam
{
    static constexpr const char* NAME = "gameEquipParam";
    static constexpr const char* ALIAS = "RequestItemParam";

    TweakDBID slotID; // 00
    ItemID itemIDToEquip; // 08
    bool forceFirstEquip; // 18
    bool instant; // 19
    uint8_t unk1A[0x1C - 0x1A]; // 1A
};
RED4EXT_ASSERT_SIZE(EquipParam, 0x1C);
} // namespace game
using gameEquipParam = game::EquipParam;
using RequestItemParam = game::EquipParam;
} // namespace RED4ext

// clang-format on
