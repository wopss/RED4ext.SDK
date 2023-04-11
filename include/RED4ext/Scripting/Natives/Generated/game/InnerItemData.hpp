#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct InnerItemData
{
    static constexpr const char* NAME = "gameInnerItemData";
    static constexpr const char* ALIAS = "InnerItemData";

    uint8_t unk00[0x50 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(InnerItemData, 0x50);
} // namespace game
using gameInnerItemData = game::InnerItemData;
using InnerItemData = game::InnerItemData;
} // namespace RED4ext

// clang-format on
