#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct DebugContextPtr
{
    static constexpr const char* NAME = "gameDebugContextPtr";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(DebugContextPtr, 0x8);
} // namespace game
using gameDebugContextPtr = game::DebugContextPtr;
} // namespace RED4ext

// clang-format on
