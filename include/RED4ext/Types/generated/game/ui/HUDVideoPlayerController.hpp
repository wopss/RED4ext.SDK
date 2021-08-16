#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct HUDVideoPlayerController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiHUDVideoPlayerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE8[0x11C - 0xE8]; // E8
    bool playOnHud; // 11C
    uint8_t unk11D[0x120 - 0x11D]; // 11D
};
RED4EXT_ASSERT_SIZE(HUDVideoPlayerController, 0x120);
} // namespace game::ui
} // namespace RED4ext
