#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct EffectData
{
    static constexpr const char* NAME = "gameEffectData";
    static constexpr const char* ALIAS = "EffectData";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EffectData, 0x8);
} // namespace game
using gameEffectData = game::EffectData;
using EffectData = game::EffectData;
} // namespace RED4ext

// clang-format on
