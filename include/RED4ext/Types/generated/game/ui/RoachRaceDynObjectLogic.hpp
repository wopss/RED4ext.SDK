#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/game/ui/SideScrollerMiniGameDynObjectLogic.hpp>

namespace RED4ext
{
namespace game::ui { 
struct RoachRaceDynObjectLogic : game::ui::SideScrollerMiniGameDynObjectLogic
{
    static constexpr const char* NAME = "gameuiRoachRaceDynObjectLogic";
    static constexpr const char* ALIAS = "RoachRaceMinigameDynObject";

    float minSpawnY; // 80
    float maxSpawnY; // 84
    float extraSpeed; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    DynArray<float> availableY; // 90
};
RED4EXT_ASSERT_SIZE(RoachRaceDynObjectLogic, 0xA0);
} // namespace game::ui
using RoachRaceMinigameDynObject = game::ui::RoachRaceDynObjectLogic;
} // namespace RED4ext
