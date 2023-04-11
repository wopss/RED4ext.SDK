#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogic.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RoachRaceDynObjectLogic : game::ui::SideScrollerMiniGameDynObjectLogic
{
    static constexpr const char* NAME = "gameuiRoachRaceDynObjectLogic";
    static constexpr const char* ALIAS = "RoachRaceMinigameDynObject";

    float minSpawnY; // 90
    float maxSpawnY; // 94
    float extraSpeed; // 98
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
    DynArray<float> availableY; // A0
};
RED4EXT_ASSERT_SIZE(RoachRaceDynObjectLogic, 0xB0);
} // namespace game::ui
using gameuiRoachRaceDynObjectLogic = game::ui::RoachRaceDynObjectLogic;
using RoachRaceMinigameDynObject = game::ui::RoachRaceDynObjectLogic;
} // namespace RED4ext

// clang-format on
