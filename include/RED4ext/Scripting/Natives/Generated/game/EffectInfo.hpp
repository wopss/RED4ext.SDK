#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct EffectInfo
{
    static constexpr const char* NAME = "gameEffectInfo";
    static constexpr const char* ALIAS = "EffectInfo";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EffectInfo, 0x8);
} // namespace game
using gameEffectInfo = game::EffectInfo;
using EffectInfo = game::EffectInfo;
} // namespace RED4ext

// clang-format on
