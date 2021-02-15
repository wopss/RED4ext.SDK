#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace game { 
struct ItemFactorySystemPool
{
    static constexpr const char* NAME = "gameItemFactorySystemPool";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x120 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ItemFactorySystemPool, 0x120);
} // namespace game
} // namespace RED4ext
