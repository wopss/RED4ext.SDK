#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct RazerChromaAnimation
{
    static constexpr const char* NAME = "gameRazerChromaAnimation";
    static constexpr const char* ALIAS = NAME;

    int32_t id; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName name; // 08
    DataBuffer buffer; // 10
};
RED4EXT_ASSERT_SIZE(RazerChromaAnimation, 0x38);
} // namespace game
using gameRazerChromaAnimation = game::RazerChromaAnimation;
} // namespace RED4ext

// clang-format on
