#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LootObject.hpp>

namespace RED4ext
{
namespace game
{
struct ItemDropObject : game::LootObject
{
    static constexpr const char* NAME = "gameItemDropObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk290[0x2E8 - 0x290]; // 290
};
RED4EXT_ASSERT_SIZE(ItemDropObject, 0x2E8);
} // namespace game
using gameItemDropObject = game::ItemDropObject;
} // namespace RED4ext

// clang-format on
