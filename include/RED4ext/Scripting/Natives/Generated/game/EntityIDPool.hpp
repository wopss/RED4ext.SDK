#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct EntityIDPool
{
    static constexpr const char* NAME = "gameEntityIDPool";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EntityIDPool, 0x30);
} // namespace game
using gameEntityIDPool = game::EntityIDPool;
} // namespace RED4ext

// clang-format on
