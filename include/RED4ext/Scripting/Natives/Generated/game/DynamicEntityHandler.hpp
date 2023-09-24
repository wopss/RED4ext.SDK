#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct DynamicEntityHandler
{
    static constexpr const char* NAME = "gameDynamicEntityHandler";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x168 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(DynamicEntityHandler, 0x168);
} // namespace game
using gameDynamicEntityHandler = game::DynamicEntityHandler;
} // namespace RED4ext

// clang-format on
