#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct DebugContextUserData
{
    static constexpr const char* NAME = "gameDebugContextUserData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(DebugContextUserData, 0x8);
} // namespace game
using gameDebugContextUserData = game::DebugContextUserData;
} // namespace RED4ext

// clang-format on
