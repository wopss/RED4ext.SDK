#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ObjectPS.hpp>

namespace RED4ext
{
namespace cp
{
struct PlayerDetectorPS : game::ObjectPS
{
    static constexpr const char* NAME = "cpPlayerDetectorPS";
    static constexpr const char* ALIAS = NAME;

    int32_t secondsCounter; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(PlayerDetectorPS, 0x70);
} // namespace cp
using cpPlayerDetectorPS = cp::PlayerDetectorPS;
} // namespace RED4ext

// clang-format on
