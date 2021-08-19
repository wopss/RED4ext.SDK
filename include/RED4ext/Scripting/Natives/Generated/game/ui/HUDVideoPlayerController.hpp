#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct HUDVideoPlayerController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiHUDVideoPlayerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE8[0x138 - 0xE8]; // E8
    bool playOnHud; // 138
    uint8_t unk139[0x140 - 0x139]; // 139
};
RED4EXT_ASSERT_SIZE(HUDVideoPlayerController, 0x140);
} // namespace game::ui
} // namespace RED4ext
