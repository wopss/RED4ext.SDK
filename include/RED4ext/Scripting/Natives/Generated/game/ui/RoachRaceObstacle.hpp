#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RoachRaceObstacle
{
    static constexpr const char* NAME = "gameuiRoachRaceObstacle";
    static constexpr const char* ALIAS = "RoachRaceObstacle";

    float interval; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName dynObjectType; // 08
};
RED4EXT_ASSERT_SIZE(RoachRaceObstacle, 0x10);
} // namespace game::ui
using gameuiRoachRaceObstacle = game::ui::RoachRaceObstacle;
using RoachRaceObstacle = game::ui::RoachRaceObstacle;
} // namespace RED4ext

// clang-format on
