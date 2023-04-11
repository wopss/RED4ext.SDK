#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct ItemData : IScriptable
{
    static constexpr const char* NAME = "gameItemData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x78 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ItemData, 0x78);
} // namespace game
using gameItemData = game::ItemData;
} // namespace RED4ext

// clang-format on
