#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct CyberspacePixelsortEffectParams
{
    static constexpr const char* NAME = "gameCyberspacePixelsortEffectParams";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
    bool fullscreen; // 30
    bool vfx; // 31
    uint8_t unk32[0x34 - 0x32]; // 32
    float initialDatamosh; // 34
    float targetDatamosh; // 38
    float initialIntensity; // 3C
    float targetIntensity; // 40
    float timeBlend; // 44
};
RED4EXT_ASSERT_SIZE(CyberspacePixelsortEffectParams, 0x48);
} // namespace game
using gameCyberspacePixelsortEffectParams = game::CyberspacePixelsortEffectParams;
} // namespace RED4ext

// clang-format on
