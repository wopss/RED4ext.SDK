#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct ItemFactorySystemPool
{
    static constexpr const char* NAME = "gameItemFactorySystemPool";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x128 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ItemFactorySystemPool, 0x128);
} // namespace game
using gameItemFactorySystemPool = game::ItemFactorySystemPool;
} // namespace RED4ext

// clang-format on
