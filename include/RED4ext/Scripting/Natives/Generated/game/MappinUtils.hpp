#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct MappinUtils
{
    static constexpr const char* NAME = "gameMappinUtils";
    static constexpr const char* ALIAS = "MappinUtils";

    uint8_t unk00[0x10 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(MappinUtils, 0x10);
} // namespace game
using gameMappinUtils = game::MappinUtils;
using MappinUtils = game::MappinUtils;
} // namespace RED4ext

// clang-format on
