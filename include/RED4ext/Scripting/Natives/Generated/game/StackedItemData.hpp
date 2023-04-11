#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemData.hpp>

namespace RED4ext
{
namespace game
{
struct StackedItemData : game::ItemData
{
    static constexpr const char* NAME = "gameStackedItemData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x90 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(StackedItemData, 0x90);
} // namespace game
using gameStackedItemData = game::StackedItemData;
} // namespace RED4ext

// clang-format on
