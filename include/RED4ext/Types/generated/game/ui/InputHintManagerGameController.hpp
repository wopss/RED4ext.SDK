#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetLibraryReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct InputHintManagerGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiInputHintManagerGameController";
    static constexpr const char* ALIAS = "InputHintManagerGameController";

    uint8_t unkD0[0x1D0 - 0xD0]; // D0
    ink::CompoundWidgetReference baseGroupContainer; // 1D0
    ink::CompoundWidgetReference groupsContainer; // 1E8
    ink::WidgetLibraryReference hintLibRef; // 200
    uint8_t unk210[0x218 - 0x210]; // 210
    ink::WidgetLibraryReference groupLibRef; // 218
    uint8_t unk228[0x230 - 0x228]; // 228
    CName hintContainerId; // 230
    uint8_t unk238[0x250 - 0x238]; // 238
};
RED4EXT_ASSERT_SIZE(InputHintManagerGameController, 0x250);
} // namespace game::ui
using InputHintManagerGameController = game::ui::InputHintManagerGameController;
} // namespace RED4ext
