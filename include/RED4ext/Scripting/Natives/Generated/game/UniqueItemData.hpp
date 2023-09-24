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
struct UniqueItemData : game::ItemData
{
    static constexpr const char* NAME = "gameUniqueItemData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x100 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(UniqueItemData, 0x100);
} // namespace game
using gameUniqueItemData = game::UniqueItemData;
} // namespace RED4ext

// clang-format on
