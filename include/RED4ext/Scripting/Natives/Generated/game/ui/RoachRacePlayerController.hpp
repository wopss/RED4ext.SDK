#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGamePlayerController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RoachRacePlayerController : game::ui::SideScrollerMiniGamePlayerController
{
    static constexpr const char* NAME = "gameuiRoachRacePlayerController";
    static constexpr const char* ALIAS = "RoachRacePlayerController";

    uint8_t unk88[0x98 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(RoachRacePlayerController, 0x98);
} // namespace game::ui
using gameuiRoachRacePlayerController = game::ui::RoachRacePlayerController;
using RoachRacePlayerController = game::ui::RoachRacePlayerController;
} // namespace RED4ext

// clang-format on
