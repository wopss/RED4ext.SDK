#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct MovingPlatformArrivedAt : red::Event
{
    static constexpr const char* NAME = "gameMovingPlatformArrivedAt";
    static constexpr const char* ALIAS = "ArrivedAt";

    CName destinationName; // 40
    int32_t data; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(MovingPlatformArrivedAt, 0x50);
} // namespace game
using gameMovingPlatformArrivedAt = game::MovingPlatformArrivedAt;
using ArrivedAt = game::MovingPlatformArrivedAt;
} // namespace RED4ext

// clang-format on
