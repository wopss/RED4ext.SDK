#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct EffectData_SplatterList
{
    static constexpr const char* NAME = "gameEffectData_SplatterList";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EffectData_SplatterList, 0x10);
} // namespace game
using gameEffectData_SplatterList = game::EffectData_SplatterList;
} // namespace RED4ext

// clang-format on
