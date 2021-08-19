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
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0x1B8 - 0xD0]; // D0
    TweakDBID symbolsRecordTDBID; // 1B8
    TweakDBID minigameDefaultsTDBID; // 1C0
    uint8_t unk1C8[0x1F8 - 0x1C8]; // 1C8
};
RED4EXT_ASSERT_SIZE(HackingMinigameGameController, 0x1F8);
} // namespace game::ui
} // namespace RED4ext
