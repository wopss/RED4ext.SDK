#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct HackingMinigameGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiHackingMinigameGameController";
    static constexpr const char* ALIAS = "HackingMinigameGameController";

    uint8_t unkE0[0x1C8 - 0xE0]; // E0
    TweakDBID symbolsRecordTDBID; // 1C8
    TweakDBID minigameDefaultsTDBID; // 1D0
    uint8_t unk1D8[0x208 - 0x1D8]; // 1D8
};
RED4EXT_ASSERT_SIZE(HackingMinigameGameController, 0x208);
} // namespace game::ui
using HackingMinigameGameController = game::ui::HackingMinigameGameController;
} // namespace RED4ext
