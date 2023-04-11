#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct HUDVideoPlayerController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiHUDVideoPlayerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkF8[0x148 - 0xF8]; // F8
    bool playOnHud; // 148
    uint8_t unk149[0x150 - 0x149]; // 149
};
RED4EXT_ASSERT_SIZE(HUDVideoPlayerController, 0x150);
} // namespace game::ui
using gameuiHUDVideoPlayerController = game::ui::HUDVideoPlayerController;
} // namespace RED4ext

// clang-format on
