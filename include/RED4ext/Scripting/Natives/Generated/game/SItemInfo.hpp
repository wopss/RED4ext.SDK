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
struct SItemInfo
{
    static constexpr const char* NAME = "gameSItemInfo";
    static constexpr const char* ALIAS = "SItemInfo";

    ItemID itemID; // 00
    int32_t slotIndex; // 10
};
RED4EXT_ASSERT_SIZE(SItemInfo, 0x14);
} // namespace game
using gameSItemInfo = game::SItemInfo;
using SItemInfo = game::SItemInfo;
} // namespace RED4ext

// clang-format on
