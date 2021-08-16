#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/SideScrollerMiniGamePlayerController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct RoachRacePlayerController : game::ui::SideScrollerMiniGamePlayerController
{
    static constexpr const char* NAME = "gameuiRoachRacePlayerController";
    static constexpr const char* ALIAS = "RoachRacePlayerController";

    uint8_t unk78[0x88 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(RoachRacePlayerController, 0x88);
} // namespace game::ui
using RoachRacePlayerController = game::ui::RoachRacePlayerController;
} // namespace RED4ext
