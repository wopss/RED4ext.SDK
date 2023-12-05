#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct HackingMinigameGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiHackingMinigameGameController";
    static constexpr const char* ALIAS = "HackingMinigameGameController";

    uint8_t unkE0[0x1E0 - 0xE0]; // E0
    TweakDBID symbolsRecordTDBID; // 1E0
    TweakDBID minigameDefaultsTDBID; // 1E8
    uint8_t unk1F0[0x1FE - 0x1F0]; // 1F0
    bool deviceMode; // 1FE
    uint8_t unk1FF[0x228 - 0x1FF]; // 1FF
};
RED4EXT_ASSERT_SIZE(HackingMinigameGameController, 0x228);
} // namespace game::ui
using gameuiHackingMinigameGameController = game::ui::HackingMinigameGameController;
using HackingMinigameGameController = game::ui::HackingMinigameGameController;
} // namespace RED4ext

// clang-format on
